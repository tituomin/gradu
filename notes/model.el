; calls function-calls virtual-calls parameters globals locals pin bytes
(defun jni (direction)
  (if (equal "cj" direction)
      (+
       (* 0.43 calls)
       (*  0.9 function-calls)
       (* 0.64 virtual-calls)
       (* 0.07 parameters)
       (* 0.52 globals)
       (* 0.51 0.45 locals)
       (*  0.8 pinning)
       (* 0.00053 bytes))))

; static call 0 parameters cj
; measure: 1.340705927
(let ((calls 1)
      (function-calls 1)
      (virtual-calls 0)
      (parameters 1)
      (globals 0)
      (locals 0)
      (bytes 0)
      (pinning 0))
  (jni "cj"))

; basic call long array 0 
; measure: 2.534
(let ((calls 1)
      (function-calls 1)
      (virtual-calls 1)
      (bytes 0)
      (pinning 0)
      (parameters 1)
      (globals 1)
      (locals 0))
  (jni "cj"))

; basic call long array 20 
; measure: 15.578698744 - 0.201828627
; = 15.37
(let ((calls 1)
      (function-calls 1)
      (virtual-calls 1)
      (bytes 0)
      (pinning 0)
      (parameters 21)
      (globals 21)
      (locals 0))
  (jni "cj"))

; basic call int 0
; measure: 2.67512402
; 2.67512402 - 0.141008667 = 2.534115353
(let ((calls 1)
      (function-calls 1)
      (virtual-calls 1)
      (bytes 0)
      (pinning 0)
      (parameters 1)
      (globals 1)
      (locals 0))
  (jni "cj"))

; basic call int 2measure: 3.695259940
; 5.695259945 - 0.193387501 = 3.501872444
(let ((calls 1)
      (function-calls 1)
      (virtual-calls 1)
      (bytes 0)
      (pinning 0)
      (parameters 21)
      (globals 1)
      (locals 0))
  (jni "cj"))
