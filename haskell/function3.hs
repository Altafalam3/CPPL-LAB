-- int passed int returned
cube :: Int -> Int
cube num = num*num*num

sayHi :: String->String
sayHi name ="hello " ++ name

main = do
        let a=3
        print(cube a)
        let b= sayHi "altaf"
        putStrLn (b)