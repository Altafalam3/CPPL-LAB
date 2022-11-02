--taking string as input and printing something on console
sayHi ::String -> IO()
sayHi name = do
       putStrLn ("Hello "++ name)
       putStrLn " heyy"


--taking string then int as input and printing something on console
sayHey ::String ->Int -> IO()
sayHey name age = do
       putStrLn ("Heyy bro "++ name)
       putStrLn (show age ++ " babz")

main :: IO ()
main = do
       putStrLn "hii"
       
       --giving string input (name)
       sayHi "altaf"
       sayHey "pikachu" 18
       
       putStrLn "end"