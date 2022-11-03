-- Repeating a particular function twice
--reapply is not a keyword

-- reapply::(a->a)->a->a
reapply f x=f(f x)
square x=x*x
double x=x*2
half x=x/2

main=do
     putStrLn"Enter number :"
     ain<-getLine
     let a=(read ain)
     print(reapply square a)
     print(reapply double a)
     print(reapply half a)
