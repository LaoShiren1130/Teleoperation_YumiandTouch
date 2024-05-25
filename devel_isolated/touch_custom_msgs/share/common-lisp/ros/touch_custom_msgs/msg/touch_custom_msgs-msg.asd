
(cl:in-package :asdf)

(defsystem "touch_custom_msgs-msg"
  :depends-on (:roslisp-msg-protocol :roslisp-utils )
  :components ((:file "_package")
    (:file "TouchState" :depends-on ("_package_TouchState"))
    (:file "_package_TouchState" :depends-on ("_package"))
  ))