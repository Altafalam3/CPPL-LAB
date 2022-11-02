//Operator overloading program in c++
#include <iostream>
#include <math.h>

using namespace std;

class Comp
{
  float re;
  float im;

public:

    Comp ()
  {
    re = 0;
    im = 0;
  }

  Comp (float a, float b)
  {
    re = a;
    im = b;
  }

  void show ()
  {
    cout << re << "+(" << im << ")i" << endl;
  }

  void operator~ ()
  {
    im = -1 * im;
  }

  void operator& ()
  {
    re = -re;
    im = -im;
  }

  Comp operator+ (Comp p)
  {
    Comp t;

    t.re = re + p.re;
    t.im = im + p.im;
    return t;
  }

  Comp operator- (Comp p)
  {
    Comp t;

    t.re = re - p.re;
    t.im = im - p.im;
    return t;
  }

  Comp operator* (Comp p)
  {
    Comp t;

    t.re = re * p.re - im * p.im;
    t.im = re * p.im + im * p.re;
    return t;
  }

  Comp operator/ (Comp p)
  {
    Comp t;

    t.re = (re * p.re + im * p.im) / (p.re * p.re + p.im * p.im);
    t.im = im * p.re - re * p.im / (p.re * p.re + p.im * p.im);

    return t;
  }

};


int
main ()
{
  Comp x (4, 5), y (2, 3), z;
  cout<<"Addition is:"<<endl;
  z = x + y;
  z.show ();
  
  cout<<"Subtraction is:"<<endl;
  z = x - y;
  z.show ();
  
  cout<<"multiply is:"<<endl;
  z = x * y;
  z.show ();
  
  cout<<"division is:"<<endl;
  z = x / y;
  z.show ();
  
  cout<<"conjugate is:"<<endl;
  ~x;
  x.show();
  
  cout<<"negative is:"<<endl;
  &y;
  y.show();
  return 0;
}
