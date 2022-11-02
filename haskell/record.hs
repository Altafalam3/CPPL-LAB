--records just like struct any datatypes
data Student = Student {
    name ::String , age :: Int , gpa :: Double
}deriving Show

main = do 
        let student2 = Student {
            name="altaf ", age=19,gpa=9.67
        }
        let student1 = Student {
            name="sarah ", age=19,gpa=9.50
        }
        --similarly we can make multiple students
        print student1
        
        --finding something inside this
        putStrLn(name student1)
        print(gpa student1)