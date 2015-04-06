#lang racket
(define (max x y) (if( > x y) x y))
(define x (list 1 2 3 4))
(define (maxlist lst)
  (if( = (length lst) 1) (car lst) (max (car lst) (maxlist (cdr lst)))))
(maxlist x)
