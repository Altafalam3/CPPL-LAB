-- evaluate following
solve n = ((n*n)+(4*n)-5)

main = do putStrLn "Enter value of x : "
          xin <- getLine
          let x = read xin::Int
          print(solve x)
