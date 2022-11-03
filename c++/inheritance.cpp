//inheritance
/* inheritance is a process of inheriting properties and behaviours of existing class into new class. 
Can be defined as IS-A relationship(parent-child relationship) . 
eg Remember men and women class inherits from human.
Advantages-1.write less code, code reusability
Protected class is similar like private class except the child/derived class can access*/
#include <iostream>
using namespace std;
//super/base class
class Human{
    public:
    int height;
    int weight;
    int age;
    
    public:
    int getage(){
        return this -> age;;
    }
    
    void setweight(int w){
        this -> weight=w;
    }
};
//subclass
class Male: public Human{
    public:
    string color;
    
    void sleep(){
        cout<<"Male sleeping"<<endl;
    }
    // void setheight(int x){
    // x=5;
    //     this->height;
    // }
    
    int getheight(){
        return this -> height;
    }
};
class Rashid: public Male{
    
};

int main(){
    Male object1;
    cout<<object1.age<<endl;
      cout<<object1.weight<<endl;
        cout<<object1.height<<endl;
          cout<<object1.color<<endl;
          object1.sleep();
          object1.setweight(45);
          cout<<object1.weight<<endl;
    return 0;
}
