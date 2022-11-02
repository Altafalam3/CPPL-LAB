printto100 :: Int -> IO()

--this will run once only hence lil changes needed
-- printto100 num = do
--     if num<=100
--     then print(num)
--     else putStrLn "complete loop"
    
--loop using recursion 
printto100 num = do
    if num<=100
    then do
        print(num)
        printto100 (num+1)
    else putStrLn "complete loop"

main = do
        printto100 1