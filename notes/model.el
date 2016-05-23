; calls function-calls virtual-calls parameters globals locals pin bytes
(defun jni (direction)
  (cond
   ((equal "cj" direction)
    (+ (* 0.28 calls)
       (* 0.97 function-calls)
       (* 0.64 virtual-calls)
       (* 0.05 parameters) ; test .07 -> .1
       (* 0.59 globals) ; test 52 -> 58
       (* 0.52 0.45 locals)
       (*    2 pinning)
       (* 0.00053 bytes)))
   ((equal "jc" direction)
    (+ (*    0 calls) 
       (*    0 pinning)
       (*    0 globals)
       (*    0 bytes)
       (*  0.39 function-calls)
       (*  0.05 virtual-calls)
       (* 0.0085 parameters)
       (* 0.32 locals)))))

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

; static call 0 parameters jc
; target: 0.72
(let ((calls 1)
      (function-calls 1)
      (virtual-calls 0)
      (parameters 1)
      (globals 0)
      (locals 1)
      (bytes 0)
      (pinning 0))
  (jni "jc"))


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


; ---------- j to c -----------
; basic call long array 0 
; measure: 0.824651381 - 0.054271917
; = 0.770379464
(let ((calls 1)
      (function-calls 1)
      (virtual-calls 1)
      (bytes 0)
      (pinning 0)
      (parameters 1)
      (globals 0)
      (locals 1))
  (jni "jc"))

; basic call long array 20 
; measure: 7.414803807 - 0.104865541
; = 7.309938266
(let ((calls 1)
      (function-calls 1)
      (virtual-calls 1)
      (bytes 0)
      (pinning 0)
      (parameters 21)
      (globals 0)
      (locals 21))
  (jni "jc"))

; ----- c to j ---------

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

; basic call int 20 measure: 3.695259940
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

; --- java to c ----

; basic call int 0
; 0.824651381 - 0.054271917
; = 0.770379464
(let ((calls 1)
      (function-calls 1)
      (virtual-calls 1)
      (bytes 0)
      (pinning 0)
      (parameters 1)
      (globals 0)
      (locals 1))
  (jni "jc"))

; basic call int 20 measure:
; 1.025977591 - 0.104758834
; = 0.921218757
(let ((calls 1)
      (function-calls 1)
      (virtual-calls 1)
      (bytes 0)
      (pinning 0)
      (parameters 21)
      (globals 0)
      (locals 1))
  (jni "jc"))


; set static float field
; measurement: 0.42496192
(let ((calls 1)
      (function-calls 0)
      (virtual-calls 0)
      (bytes 0)
      (pinning 0)
      (parameters 3)
      (globals 0)
      (locals 0))
  (jni "cj"))

; get double array elements
(let ((calls 1)
      (function-calls 0)
      (virtual-calls 0)
      (bytes 0)
      (pinning 1)
      (parameters 2)
      (globals 1)
      (locals 0))
  (jni "cj"))
