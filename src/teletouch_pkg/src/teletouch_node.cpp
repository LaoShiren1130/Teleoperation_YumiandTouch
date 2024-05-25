#include <ros/ros.h>
#include <geometry_msgs/Point.h>
#include <std_msgs/Float64.h>
#include <std_msgs/Bool.h>
#include <iostream>
#include <touch_custom_msgs/TouchState.h>

#ifdef _WIN64
#pragma warning (disable:4996)
#endif

#include <stdio.h>
#if defined(WIN32)
# include <windows.h>
#else
# include <ncurses.h>
# include <stdlib.h>
# include <ctype.h>
# include <string.h>
#define FALSE 0
#define TRUE 1
#endif

#include <HD/hd.h>
#include <HL/hl.h>
#include <HDU/hduError.h>
#include <HDU/hduVector.h>

#include <stdlib.h>
#include <cassert>
#include <iomanip>

#include <HDU/hduMath.h>
#include <HDU/hduMatrix.h>
using namespace std;

static hduVector3Dd ApplyForce_static;
static hduVector3Dd ApplyJoint_Torque;
static HDdouble HD_transforms[16];
static HDdouble IRBtransform[16];
static HDdouble Joints[6];
static HDdouble gripper_static = 100;
static HDdouble MaxForce_static = 3.4;
static const hduVector3Dd maxGimbalTorque(188.0,188.0,48.0); //mNm
static const hduVector3Dd nominalBaseTorque(200.0,350.0,200.0); //mNm
static bool TorqueMode = FALSE;
static bool Functioncall = FALSE;
//static bool Weicaomode = FALSE;
HDSchedulerHandle gCallbackHandle = 0;


HDCallbackCode HDCALLBACK ApplyForceTorqueCallback(void* pUserData);

void matlabforceCallback(const geometry_msgs::Point::ConstPtr& msg)
{
    ApplyForce_static[0]=msg->x;
    ApplyForce_static[1]=msg->y;
    ApplyForce_static[2]=msg->z;
    TorqueMode = FALSE;
    /*ROS_INFO("I heard: [%d]", msg->data.c_str());*/
}
void matlabtorqueCallback(const geometry_msgs::Point::ConstPtr& msg)
{
    ApplyJoint_Torque[0]=msg->x;
    ApplyJoint_Torque[1]=msg->y;
    ApplyJoint_Torque[2]=msg->z;
    TorqueMode = TRUE;
/*ROS_INFO("I heard: [%d]", msg->data.c_str());*/
}

int main(int argc, char *argv[])
{
    ros::init(argc, argv, "teletouch");
    ros::NodeHandle nh;
    ros::Rate loop_rate(1000);
    ros::Publisher touchstate_pub = nh.advertise<touch_custom_msgs::TouchState>("/robot/teltouch/left/touchstate",10);
    memset(ApplyForce_static,0,sizeof(hduVector3Dd));
    memset(ApplyJoint_Torque,0,sizeof(hduVector3Dd));
    HDErrorInfo error;
    HHD hHD = hdInitDevice(HD_DEFAULT_DEVICE);
    if (HD_DEVICE_ERROR(error = hdGetError()))
    {
        hduPrintError(stderr, &error, "Failed to initialize haptic device");
        fprintf(stderr, "\nPress any key to quit.\n");
        getch();
        return -1;
    }

    printf("teleoperation start\n");

    // Start the servo scheduler and enable forces.
    gCallbackHandle = hdScheduleAsynchronous(ApplyForceTorqueCallback, 0, HD_MAX_SCHEDULER_PRIORITY);

    hdEnable(HD_FORCE_OUTPUT);
    hdGetDoublev(HD_NOMINAL_MAX_FORCE,&MaxForce_static);

    hdStartScheduler();
    if (HD_DEVICE_ERROR(error = hdGetError()))
    {
        hduPrintError(stderr, &error, "Failed to start scheduler");
        fprintf(stderr, "\nPress any key to quit.\n");
        getch();
        return -1;
    }

    ros::Subscriber force_sub = nh.subscribe("/touch/left/matlabforce", 10, matlabforceCallback);

    ros::Subscriber torque_sub = nh.subscribe("/touch/left/matlabtorque", 10, matlabtorqueCallback);
    static touch_custom_msgs::TouchState msg;
    while(ros::ok())
    {
        for (int i=0;i<16;i++)
        {
            msg.IRBtransform[i]=IRBtransform[i];
        }
        for (int j=0;j<6;j++)
        {
            msg.Joints[j]=Joints[j];
        }
        msg.Functioncall=Functioncall;
        msg.Gripcommand=gripper_static;

        touchstate_pub.publish(msg);
        ros::spinOnce();
        loop_rate.sleep();
    }

    hdStopScheduler();
    hdUnschedule(gCallbackHandle);
    hdDisableDevice(hHD);
    return 0;
}


HDCallbackCode HDCALLBACK ApplyForceTorqueCallback(void *pUserData)
{
    HDErrorInfo error;
    HDint nCurrentButtons, nLastButtons;
    hduVector3Dd HD_Angles, HD_Joints;
    hdBeginFrame(hdGetCurrentDevice());
    hdGetDoublev(HD_CURRENT_TRANSFORM,HD_transforms);
    hdGetDoublev(HD_CURRENT_GIMBAL_ANGLES,HD_Angles);
    hdGetDoublev(HD_CURRENT_JOINT_ANGLES,HD_Joints);

    IRBtransform[0] = -HD_transforms[6];
    IRBtransform[1] = -HD_transforms[4];
    IRBtransform[2] = -HD_transforms[5];
    IRBtransform[3] = -HD_transforms[7];
    IRBtransform[4] = HD_transforms[2];
    IRBtransform[5] = HD_transforms[0];
    IRBtransform[6] = HD_transforms[1];
    IRBtransform[7] = HD_transforms[3];
    IRBtransform[8] = HD_transforms[10];
    IRBtransform[9] = HD_transforms[8];
    IRBtransform[10] = HD_transforms[9];
    IRBtransform[11] = HD_transforms[11];
    IRBtransform[12] = HD_transforms[14];
    IRBtransform[13] = HD_transforms[12];
    IRBtransform[14] = HD_transforms[13];
    IRBtransform[15] = HD_transforms[15];
    Joints[3] = HD_Angles[0];
    Joints[4] = HD_Angles[1];
    Joints[5] = HD_Angles[2];
    Joints[0] = HD_Joints[0];
    Joints[1] = HD_Joints[1];
    Joints[2] = HD_Joints[2] - 1.570796 - HD_Joints[1];

    hdGetIntegerv(HD_CURRENT_BUTTONS, &nCurrentButtons);
    hdGetIntegerv(HD_LAST_BUTTONS, &nLastButtons);
    if ((nCurrentButtons & HD_DEVICE_BUTTON_1) != 0 && (nLastButtons & HD_DEVICE_BUTTON_1) == 0)
    {
        /* Detected button down */
        if (gripper_static == 0)
            gripper_static = 100;
        else
            gripper_static = 0;
    }
    if ((nCurrentButtons & HD_DEVICE_BUTTON_2) != 0 && (nLastButtons & HD_DEVICE_BUTTON_2) == 0)
    {
        /* Detected button up */
        Functioncall = TRUE;
        //Weicaomode = !Weicaomode;
    }
    if ((nCurrentButtons & HD_DEVICE_BUTTON_2) == 0 && (nLastButtons & HD_DEVICE_BUTTON_2) != 0)
    {
        /* Detected button up */
        Functioncall = FALSE;
    }
    /* Send zero force to the device, or else it will just continue
    rendering the last force sent */
    if (TorqueMode)
    {
        for (int i=0; i<3; i++)
        {
            if (ApplyJoint_Torque[i] > nominalBaseTorque[i])
                ApplyJoint_Torque[i] = nominalBaseTorque[i];
            else if (ApplyJoint_Torque[i] < -nominalBaseTorque[i])
                ApplyJoint_Torque[i] = -nominalBaseTorque[i];
        }
    hdSetDoublev(HD_CURRENT_JOINT_TORQUE, ApplyJoint_Torque);
    }
    else
    {
        for (int i=0; i<3; i++)
        {
            if (ApplyForce_static[i] > MaxForce_static)
                ApplyForce_static[i] = MaxForce_static;
            else if (ApplyForce_static[i] < -MaxForce_static)
                ApplyForce_static[i] = -MaxForce_static;
        }
    hdSetDoublev(HD_CURRENT_FORCE, ApplyForce_static);
    }
    hdEndFrame(hdGetCurrentDevice());
    /* Check if an error occurred while attempting to render the force */
    if (HD_DEVICE_ERROR(error = hdGetError()))
    {
        return HD_CALLBACK_DONE;
    }
    return HD_CALLBACK_CONTINUE;


    if (HD_DEVICE_ERROR(error = hdGetError()))
    {
        return HD_CALLBACK_DONE;
    }
    return HD_CALLBACK_CONTINUE;
}
