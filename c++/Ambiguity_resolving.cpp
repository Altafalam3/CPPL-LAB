// Multiple inheritance leads to ambiguity sometimes
//Multiple inheritance doesnt work in java
//2 parents to 1 child
#include <iostream>
using namespace std;

class A
{
public:
  void func()
  {
    cout << "I am A " << endl;
  }
};

class B
{
public:
  void func()
  {
    cout << "I am B" << endl;
  }
};

class C : public B, public A
{
};

int main()
{
  C obj1;
  // obj1.func();
  //to avoid confusion which parent function to call
  //we specify the parent name::function_name
  obj1.A::func();
  obj1.B::func();
  return 0;
}
