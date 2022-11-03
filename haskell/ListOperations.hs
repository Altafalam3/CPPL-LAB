--Takes a list input and gives output as list

double[]=[]
-- here x is head xs is remaining elements
--after performing it calls same function with tail elements

double (x:xs)  =[x+x] ++double(xs)
main = do
      putStrLn"Enter 1st num:"
      pin<-getLine
      let p=(read pin ::Int)

      putStrLn"Enter 2nd num:"
      iin<-getLine
      let i=(read iin :: Int)
      putStrLn"Enter 3rd num:"
      kin<-getLine
      let k=(read kin :: Int)
      putStrLn"Enter 4th num:"
      ain<-getLine
      let a=(read ain :: Int)

      let pikachu=[p,i,k,a]
      print(double pikachu)