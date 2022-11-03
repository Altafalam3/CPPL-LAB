#include <iostream>
using namespace std;

class regpoly
{
private:
   int nsides;

protected:
   int lside;

public:
   // Constructor overloading
   /*
      regpoly() // default constructor
      {
      }

   */

   regpoly(int n, int l) // constructor using this pointer
   {
      this->nsides = n;
      this->lside = l;
   }

   regpoly() // Interactive constructor
   {
      cout << "Enter number of sides and length of side of regular polygon" << endl;
      cin >> nsides >> lside;
   }

   regpoly(regpoly &p) // Copy Constructor
   {
      nsides = p.nsides;
      lside = p.lside;
   }

   void show()
   {
      cout << "The regular polygon has " << nsides << " sides of length " << lside << " units" << endl;
   }

   //In java Garbage collector uses finalize() method of class object by default.
   ~regpoly() // Destructor Finalization
   {
      cout << "Destructor called" << endl;
   }
};

int main()
{
   cout << "Interactive constructor r" << endl;
   regpoly r;
   r.show();

   cout << "Parameterised constructor s" << endl;
   regpoly s(3, 4);
   s.show();

   cout << "Copied object s in t" << endl;
   regpoly t(s);
   s.show();

   //Destructor is called total 3 time 3 object by default at end

   //We can call it explicitly too for a object
   cout<< "Explicit Destructor call for s" << endl;
   s.regpoly::~regpoly();

   return 0;
}
