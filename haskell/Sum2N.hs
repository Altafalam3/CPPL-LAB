summ :: Int -> Int
summ n| n==1=1
summ n| n/=1=n+summ(n-1)
main = do
putStrLn "Enter number :"
xin <- getLine
let a = (read xin :: Int)
let v = summ a
putStr "Sum of values are :"
print(v)