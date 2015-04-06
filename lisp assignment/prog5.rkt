#lang racket
(define x (list 1 2 3 4))
(define (sum lst)
  (if(empty? lst) 0 (+ (car lst) (sum (cdr lst))))
  )
(sum x)