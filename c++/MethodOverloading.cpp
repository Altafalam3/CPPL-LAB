#include <iostream>
#include <string.h>
using namespace std;

class addovr
{
public:
   char r[10];
   //same name different paramter taking and return type
   int add(int x, int y) { return (x + y); }

   double add(double x, double y) { return (x + y); }

   //string concat
   char *add(char *x, char *y)
   {
      int l = 0;

      while (*x != '\0'){
         r[l++] = *x++;
      }

      while (*y != '\0'){
         r[l++] = *y++;
      }

      r[l] = '\0';
      return (r);
   }
};

int main()
{
   addovr a; // default constructor is added by compiler
   char c[5] = {'p', 'i', 'k', '\0', ' '}, d[5] = {'a', 'c', 'h', 'u', '\0'};

   cout << "Integer Addition " << a.add(4, 3) << endl;
   cout << "Floating point Addition " << a.add(4.3, 3.3) << endl;
   cout << "String Concatenation " << a.add(c, d) << endl;

   return 0;
}
