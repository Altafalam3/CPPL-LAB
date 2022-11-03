#include <iostream>
using namespace std;

class regpoly
{
private:
   int nsides;

protected:
   int lside;

public:
   regpoly() {}
   regpoly(int n, int l)
   {
      nsides = n;
      lside = l;
   }
   void show()
   {
      cout << "The regular polygon has " << nsides << " sides of length " << lside << "units" << endl;
   }
};

class square : public regpoly // square is-a regpoly
{
private:
   int area, peri;

public:
   square(int l) { lside = l; }
   void calarea() { area = lside * lside; }
   void calperi() // Method of class square
   {
      peri = 4 * lside;
   }
   void show() // Overridden method of class square
   {
      cout << "The square has 4 sides of length " << lside << " units" << endl;
   }
   void showareaperi() // Method of class square
   {
      cout << "The area and perimeter of square are " << area << " sq units and" << peri << " units respectively " << endl;
   }
};

class equitri : public regpoly // equitri is-a regpoly
{
private:
   int peri;
   float area;

public:
   equitri(int l) { lside = l; }
   void calarea() // Method of class equitri
   {
      area = 1.732 * lside * lside / 4;
   }
   void calperi() // Method of class equitri
   {
      peri = 3 * lside;
   }
   void show() // Overridden method of class equitri
   {
      cout << "The equilateral triangle has 3 sides of length " << lside << "units " << endl;
   }
   void showareaperi() // Method of class square
   {
      cout << "The area and perimeter of equilateral triangle are " << area << "sq units and" << peri << " units respectively " << endl;
   }
};

int main()
{
   cout << "Regular polygon r" << endl;
   regpoly r(6, 7);
   r.show();
   cout << endl<< "Square" << endl;
   square s(5);
   s.show();
   s.calarea();
   s.calperi();
   s.showareaperi();
   cout << endl<< "Equilateral triangle" << endl;
   equitri t(4);
   t.show();
   t.calarea();
   t.calperi();
   t.showareaperi();
   return 0;
}