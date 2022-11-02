main = do
        let grade = "f"
        
        --switch case
        case grade of 
            "a" -> putStrLn "best"
            "b" -> putStrLn "better"
            "c" -> putStrLn "good"
            "d" -> putStrLn "ok"
            --default condition
            _   -> putStrLn "invalid failed"