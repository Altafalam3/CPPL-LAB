work :: String-> IO()
work name =do
    if name =="sunday"
        then putStrLn "holidayyy"
        else if name =="saturday"
        then putStrLn "partial holiday"
        else putStrLn "work boring"

main = do
        work "saturday"

-- similarly we can use && || things and bool