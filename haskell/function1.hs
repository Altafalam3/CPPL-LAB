-- fun :: IO()
fun = do
       putStrLn "Hello pikachu"
       putStrLn "heyy"
       
main :: IO ()
main = do
       putStrLn "hii"
       fun
       putStrLn "end"