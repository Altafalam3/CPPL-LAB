//multiple inheritance
#include <iostream>
using namespace std;
class Animal{
  public:
  string color;
  public:
  void bark(){
       cout<<"barking"<<endl;
   }
};
class Human{
    public:
    int height;
    int weight;
    int age;
    
    public:
   void speak(){
     
       cout<<"speaking"<<endl;
   
   }
    
  
};
class Hybrid: public Animal,public Human{
    
};

int main(){
    Hybrid obj1;
    obj1.speak();
    obj1.bark();
    return 0;
}  
