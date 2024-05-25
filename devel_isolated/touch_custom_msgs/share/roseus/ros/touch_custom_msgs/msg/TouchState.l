;; Auto-generated. Do not edit!


(when (boundp 'touch_custom_msgs::TouchState)
  (if (not (find-package "TOUCH_CUSTOM_MSGS"))
    (make-package "TOUCH_CUSTOM_MSGS"))
  (shadow 'TouchState (find-package "TOUCH_CUSTOM_MSGS")))
(unless (find-package "TOUCH_CUSTOM_MSGS::TOUCHSTATE")
  (make-package "TOUCH_CUSTOM_MSGS::TOUCHSTATE"))

(in-package "ROS")
;;//! \htmlinclude TouchState.msg.html


(defclass touch_custom_msgs::TouchState
  :super ros::object
  :slots (_IRBtransform _Joints _Functioncall _Gripcommand ))

(defmethod touch_custom_msgs::TouchState
  (:init
   (&key
    ((:IRBtransform __IRBtransform) (make-array 16 :initial-element 0.0 :element-type :float))
    ((:Joints __Joints) (make-array 6 :initial-element 0.0 :element-type :float))
    ((:Functioncall __Functioncall) nil)
    ((:Gripcommand __Gripcommand) 0.0)
    )
   (send-super :init)
   (setq _IRBtransform __IRBtransform)
   (setq _Joints __Joints)
   (setq _Functioncall __Functioncall)
   (setq _Gripcommand (float __Gripcommand))
   self)
  (:IRBtransform
   (&optional __IRBtransform)
   (if __IRBtransform (setq _IRBtransform __IRBtransform)) _IRBtransform)
  (:Joints
   (&optional __Joints)
   (if __Joints (setq _Joints __Joints)) _Joints)
  (:Functioncall
   (&optional (__Functioncall :null))
   (if (not (eq __Functioncall :null)) (setq _Functioncall __Functioncall)) _Functioncall)
  (:Gripcommand
   (&optional __Gripcommand)
   (if __Gripcommand (setq _Gripcommand __Gripcommand)) _Gripcommand)
  (:serialization-length
   ()
   (+
    ;; float64[16] _IRBtransform
    (* 8    16)
    ;; float64[6] _Joints
    (* 8    6)
    ;; bool _Functioncall
    1
    ;; float64 _Gripcommand
    8
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; float64[16] _IRBtransform
     (dotimes (i 16)
       (sys::poke (elt _IRBtransform i) (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
       )
     ;; float64[6] _Joints
     (dotimes (i 6)
       (sys::poke (elt _Joints i) (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
       )
     ;; bool _Functioncall
       (if _Functioncall (write-byte -1 s) (write-byte 0 s))
     ;; float64 _Gripcommand
       (sys::poke _Gripcommand (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; float64[16] _IRBtransform
   (dotimes (i (length _IRBtransform))
     (setf (elt _IRBtransform i) (sys::peek buf ptr- :double)) (incf ptr- 8)
     )
   ;; float64[6] _Joints
   (dotimes (i (length _Joints))
     (setf (elt _Joints i) (sys::peek buf ptr- :double)) (incf ptr- 8)
     )
   ;; bool _Functioncall
     (setq _Functioncall (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; float64 _Gripcommand
     (setq _Gripcommand (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;;
   self)
  )

(setf (get touch_custom_msgs::TouchState :md5sum-) "2bd38533ff540d6d79b941998e2b99a3")
(setf (get touch_custom_msgs::TouchState :datatype-) "touch_custom_msgs/TouchState")
(setf (get touch_custom_msgs::TouchState :definition-)
      "float64[16] IRBtransform
float64[6] Joints
bool Functioncall
float64 Gripcommand
")



(provide :touch_custom_msgs/TouchState "2bd38533ff540d6d79b941998e2b99a3")


