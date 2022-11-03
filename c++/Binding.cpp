// Static Binding: Compile time binding. As shown in all programs
// Dynamic Binding: Runtime binding using base class pointer we can create and use derived class objects
//  base class pointer points to derived class at runtime
#include <iostream>
using namespace std;

class regpoly
{
private:
   int nsides;

protected:
   int lside;

public:
   virtual void show()
   {
      std::cout << "The regular polygon has " << nsides << " sides of length " << lside << " units" << std::endl;
   }
};

class square : public regpoly
{
public:
   square(int l) { lside = l; }
   void show() // Overridden method of class square
   {
      std::cout << "The square has 4 sides of length " << lside << " units" << std::endl;
   }
};

class equitri : public regpoly
{
public:
   equitri(int l) { lside = l; }
   void show() // Overridden method of class equitri
   {
      std::cout << "The equilateral triangle has 3 sides of length " << lside << " units" << std::endl;
   }
};

int main()
{
   regpoly *r, *s;//parent ptr
   r = new square(5);//point to child
   r->show();

   s = new equitri(4);
   s->show();
   return 0;
}