--Takes two list input and gives output as list

mult [][]=[]
mult (x:xs)(y:ys)  =[x*y] ++ mult xs ys

-- here x is head xs is remaining elements,similarly y
--after performing it calls same function with tail elements

main = do
      putStrLn"List1"
      putStrLn"Enter 1st num:"
      pin<-getLine
      let p=(read pin ::Int)

      putStrLn"Enter 2nd num:"
      iin<-getLine
      let i=(read iin :: Int)
      putStrLn"Enter 3rd num:"
      kin<-getLine
      let k=(read kin :: Int)

      let list1=[p,i,k]

      putStrLn"List2"
      putStrLn ("Enter first number: ")
      ain <- getLine
      let a = (read ain :: Int)
      putStrLn ("Enter second number: ")
      bin <- getLine
      let b = (read bin :: Int)
      putStrLn ("Enter third number: ")
      cin <- getLine
      let c = (read cin :: Int)

      let list2=[a,b,c]

      print(mult list1 list2)
