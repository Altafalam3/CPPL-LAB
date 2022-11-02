--Fibonacci Series print
-- 1) input is int and returns int
fib :: Int -> Int
fib 0 = 0
fib 1 = 1
fib n = fib (n-1) + fib (n - 2)

--works like array to store multiple values
fibList n = map fib[0..n]

main =
    do
    putStrLn "Enter number of fibo : "
    x <- readLn
    print (fibList x)


--------------------------

-- Merge Sort using recursion
-- mergIst::[Int]->[Int]->[Int]

mergIst [][]z = reverse z
mergIst (x:xs)[] z= mergIst xs [] (x:z)
mergIst[] (y:ys) z= mergIst [] ys (y:z)
mergIst (x:xs) (y:ys) z= if x<=y then mergIst xs (y:ys) (x:z) else mergIst (x:xs) ys (y:z)

main = print(mergIst[1,4,8,20][18,0,6,9,30][])

