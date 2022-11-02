main =do
      putStrLn "enter name"
      name <- getLine
      putStrLn "age"
      cage <- getLine
      let age = read cage::Int
      putStr(name)
      print (age)