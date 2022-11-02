-- out of main function variable declare
-- a ::String --optional when reqd
-- a="altaf"

main = do
let a="altaf"
-- concatenation string ++ used
putStrLn (a ++ " hello piko " ++ a ++ " pikachu") 
putStrLn a
putStrLn " "

let b = 28
-- print gives line break 
print b
putStrLn(show b)
-- concatenation string and number
putStrLn (show b ++ " hello piko " ++show b ++ " pikachu")