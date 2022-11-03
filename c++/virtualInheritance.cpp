// virtual inheritance ensuring single occurance of l in square
// if virtual is not written , it creates ambiguity for l

#include <iostream>
using namespace std;

class twod
{
protected:
   int l;

public:
   twod() {}
   void show() { cout << "This is 2D object" << endl; }
};

class rectangle : virtual public twod
{
private:
   int b;

public:
   rectangle() {}
   rectangle(int x, int y)
   {
      l = x;
      b = y;
   }
   void show() { cout << "The length and breadth of rectange are " << l << " and " << b << endl; }
};

class rombus : virtual public twod
{
private:
   int ang;

public:
   rombus() {}
   rombus(int a, int b)
   {
      l = a;
      ang = b;
   }
   void show() { cout << "The length and angle of rombus are " << l << " and " << ang << endl; }
};

class square : public rectangle, public rombus
{
public:
   square(int a) { l = a; }
   void show() { cout << "The square has side of length " << l << endl; }
};

int main()
{
   cout << "Rectangle" << endl;
   rectangle p(3, 4);
   p.show();
   cout << endl;

   cout << "Rombus" << endl;
   rombus q(5, 30);
   q.show();
   cout << endl;

   cout << "square" << endl;
   square r(6);
   r.show();
   cout << endl;

   return 0;
}
