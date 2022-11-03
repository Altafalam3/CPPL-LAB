#include <iostream>
using namespace std;
class Students{
    private:
    string studentName;
    int rollNumber;
    int age;
    
    public:
    string getstudentName(){
        return studentName;
    }
    
    void setstudentName(string studentName)
    {
        this -> studentName = studentName;
    }
    
    int getrollNumber(){
        return rollNumber;
    }
    
    void setrollNumber(int rollNumber)
    {
        this -> rollNumber = rollNumber;
    }
    
    int getage()
    {
        return age;
    }
    void setage(int age){
        this -> age= age;
    }
};
int main(){
    Students obj;
    obj.setstudentName("Sarah");
    obj.setrollNumber(54);
    obj.setage(20);
    cout<<"Student Name: "<<obj.getstudentName()<<endl;
     cout<<"Student Roll No: "<<obj.getrollNumber()<<endl;
      cout<<"Student Age: "<<obj.getage()<<endl;
}
