; calls function-calls virtual-calls parameters globals locals pin bytes
(defun jni (direction)
  (cond
   ((equal "cj" direction)
    (+ (* 0.28 calls)
       (* 0.97 function-calls)
       (* 0.65 virtual-calls)
       (* 0.05 parameters) ; test .07 -> .1
       (* 0.59 globals) ; test 52 -> 58
       (* 0.27 locals)
       (*  0.6 pinning)
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
(let ((calls 2)
      (function-calls 0)
      (virtual-calls 0)
      (bytes 0)
      (pinning 2)
      (parameters 2)
      (globals 2)
      (locals 0))
  (jni "cj"))


; thesis example
(let ((calls 1)
      (function-calls 1)
      (virtual-calls 1)
      (bytes 0)
      (pinning 0)
      (parameters 12)
      (globals 11)
      (locals 0))
  (jni "cj"))


; thesis data passing
; jc 1: n kpl byte calls native
(let ((calls (* 1024 128))
      (function-calls (* 1024 128))
      (virtual-calls 0)
      (bytes 0)
      (pinning 0)
      (parameters 2)
      (globals 0)
      (locals 1))
  (jni "jc"))
;51118.417

; jc 2a
(+
 (let ((calls 1) ; pass array j -> c
       (function-calls 1)
       (virtual-calls 0)
       (bytes 0)
       (pinning 0)
       (parameters 2)
       (globals 0)
       (locals 2))
   (jni "jc"))
 (let ((calls 2) ; get array elements
       (function-calls 0)
       (virtual-calls 0)
       (bytes 0)
       (pinning 2)
       (parameters 2)
       (globals 0)
       (locals 2))
   (jni "cj"))
 )
;3.4470000000000005
; + muistinluku c c 
; 0.0407 * 128 * 1024 +0.0604 = 5334


; jc 2b
(+
 (let ((calls 1) ; pass array j -> c
       (function-calls 1)
       (virtual-calls 0)
       (bytes 0)
       (pinning 0)
       (parameters 2)
       (globals 0)
       (locals 2))
   (jni "jc"))
 (let ((calls 1) ; copy array
       (function-calls 0)
       (virtual-calls 0)
       (bytes (* 128 1024))
       (pinning 0)
       (parameters 2)
       (globals 0)
       (locals 2))
   (jni "cj"))
 )
;71.43516
;; 0.0407 * 128 * 1024 +0.0604 = 5334

; jc 3 accessdirect buffer 2.3s

(+
 (let ((calls 1) ; pass array j -> c
       (function-calls 1)
       (virtual-calls 0)
       (bytes 0)
       (pinning 0)
       (parameters 2)
       (globals 0)
       (locals 2))
   (jni "jc"))
 2.3)
;3.347 + 
; 0.0407 * 128 * 1024 +0.0604 = 5334

; cj

; thesis data passing
; cj 1: n kpl byte calls native
(let ((calls (* 1024 128))
      (function-calls 128000)
      (virtual-calls 0)
      (bytes 0)
      (pinning 0)
      (parameters 2)
      (globals 0)
      (locals 1))
  (jni "jc"))
; 49920.337

; cj 2a : sama kuin toiseen suuntaan, paitsi ei tarivtse lukea -- 3.347
; plus normaali java-luku


; cj 2b : 
; jc 2b
(+
 (let ((calls 1) ; pass array j -> c
       (function-calls 1)
       (virtual-calls 0)
       (bytes 0)
       (pinning 0)
       (parameters 2)
       (globals 0)
       (locals 2))
   (jni "jc"))
 (let ((calls 1) ; copy array
       (function-calls 0)
       (virtual-calls 0)
       (bytes (* 128 1024))
       (pinning 0)
       (parameters 2)
       (globals 0)
       (locals 2))
   (jni "cj"))
 )
; 71
; plus normaali java-luku

; c2j newdirectbytebuffer 13.0898483333
; 3a
(+
 13
 (let ((calls 1) ; pass buffer c -> j
       (function-calls 1)
       (virtual-calls 0)
       (bytes 0)
       (pinning 0)
       (parameters 2)
       (globals 0)
       (locals 2))
   (jni "jc"))
 
 )
+ 
; 3b
; vakio 3 plus normaali java-luku



