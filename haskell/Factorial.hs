fact :: Int->Int
fact n|n==0=1
fact n|n/=0=n*fact(n-1)

main = do
putStrLn "Enter number:"
xin <- getLine
let a = (read xin::Int)
let c = fact a 
putStr "Factorial is :"
print(c)