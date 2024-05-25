; Auto-generated. Do not edit!


(cl:in-package touch_custom_msgs-msg)


;//! \htmlinclude TouchState.msg.html

(cl:defclass <TouchState> (roslisp-msg-protocol:ros-message)
  ((IRBtransform
    :reader IRBtransform
    :initarg :IRBtransform
    :type (cl:vector cl:float)
   :initform (cl:make-array 16 :element-type 'cl:float :initial-element 0.0))
   (Joints
    :reader Joints
    :initarg :Joints
    :type (cl:vector cl:float)
   :initform (cl:make-array 6 :element-type 'cl:float :initial-element 0.0))
   (Functioncall
    :reader Functioncall
    :initarg :Functioncall
    :type cl:boolean
    :initform cl:nil)
   (Gripcommand
    :reader Gripcommand
    :initarg :Gripcommand
    :type cl:float
    :initform 0.0))
)

(cl:defclass TouchState (<TouchState>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <TouchState>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'TouchState)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name touch_custom_msgs-msg:<TouchState> is deprecated: use touch_custom_msgs-msg:TouchState instead.")))

(cl:ensure-generic-function 'IRBtransform-val :lambda-list '(m))
(cl:defmethod IRBtransform-val ((m <TouchState>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader touch_custom_msgs-msg:IRBtransform-val is deprecated.  Use touch_custom_msgs-msg:IRBtransform instead.")
  (IRBtransform m))

(cl:ensure-generic-function 'Joints-val :lambda-list '(m))
(cl:defmethod Joints-val ((m <TouchState>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader touch_custom_msgs-msg:Joints-val is deprecated.  Use touch_custom_msgs-msg:Joints instead.")
  (Joints m))

(cl:ensure-generic-function 'Functioncall-val :lambda-list '(m))
(cl:defmethod Functioncall-val ((m <TouchState>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader touch_custom_msgs-msg:Functioncall-val is deprecated.  Use touch_custom_msgs-msg:Functioncall instead.")
  (Functioncall m))

(cl:ensure-generic-function 'Gripcommand-val :lambda-list '(m))
(cl:defmethod Gripcommand-val ((m <TouchState>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader touch_custom_msgs-msg:Gripcommand-val is deprecated.  Use touch_custom_msgs-msg:Gripcommand instead.")
  (Gripcommand m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <TouchState>) ostream)
  "Serializes a message object of type '<TouchState>"
  (cl:map cl:nil #'(cl:lambda (ele) (cl:let ((bits (roslisp-utils:encode-double-float-bits ele)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream)))
   (cl:slot-value msg 'IRBtransform))
  (cl:map cl:nil #'(cl:lambda (ele) (cl:let ((bits (roslisp-utils:encode-double-float-bits ele)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream)))
   (cl:slot-value msg 'Joints))
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'Functioncall) 1 0)) ostream)
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'Gripcommand))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <TouchState>) istream)
  "Deserializes a message object of type '<TouchState>"
  (cl:setf (cl:slot-value msg 'IRBtransform) (cl:make-array 16))
  (cl:let ((vals (cl:slot-value msg 'IRBtransform)))
    (cl:dotimes (i 16)
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:aref vals i) (roslisp-utils:decode-double-float-bits bits)))))
  (cl:setf (cl:slot-value msg 'Joints) (cl:make-array 6))
  (cl:let ((vals (cl:slot-value msg 'Joints)))
    (cl:dotimes (i 6)
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:aref vals i) (roslisp-utils:decode-double-float-bits bits)))))
    (cl:setf (cl:slot-value msg 'Functioncall) (cl:not (cl:zerop (cl:read-byte istream))))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'Gripcommand) (roslisp-utils:decode-double-float-bits bits)))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<TouchState>)))
  "Returns string type for a message object of type '<TouchState>"
  "touch_custom_msgs/TouchState")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'TouchState)))
  "Returns string type for a message object of type 'TouchState"
  "touch_custom_msgs/TouchState")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<TouchState>)))
  "Returns md5sum for a message object of type '<TouchState>"
  "2bd38533ff540d6d79b941998e2b99a3")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'TouchState)))
  "Returns md5sum for a message object of type 'TouchState"
  "2bd38533ff540d6d79b941998e2b99a3")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<TouchState>)))
  "Returns full string definition for message of type '<TouchState>"
  (cl:format cl:nil "float64[16] IRBtransform~%float64[6] Joints~%bool Functioncall~%float64 Gripcommand~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'TouchState)))
  "Returns full string definition for message of type 'TouchState"
  (cl:format cl:nil "float64[16] IRBtransform~%float64[6] Joints~%bool Functioncall~%float64 Gripcommand~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <TouchState>))
  (cl:+ 0
     0 (cl:reduce #'cl:+ (cl:slot-value msg 'IRBtransform) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ 8)))
     0 (cl:reduce #'cl:+ (cl:slot-value msg 'Joints) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ 8)))
     1
     8
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <TouchState>))
  "Converts a ROS message object to a list"
  (cl:list 'TouchState
    (cl:cons ':IRBtransform (IRBtransform msg))
    (cl:cons ':Joints (Joints msg))
    (cl:cons ':Functioncall (Functioncall msg))
    (cl:cons ':Gripcommand (Gripcommand msg))
))
