
(cl:in-package :asdf)

(defsystem "service-srv"
  :depends-on (:roslisp-msg-protocol :roslisp-utils )
  :components ((:file "_package")
    (:file "abc" :depends-on ("_package_abc"))
    (:file "_package_abc" :depends-on ("_package"))
  ))