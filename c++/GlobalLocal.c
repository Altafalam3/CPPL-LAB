#include <stdio.h>
// a,b,c,d,e are global variables
int a = 10;
int b = 20;
char c = 'A';
float d = 13.5;
float e;
void scope()
{
   // same name as of main function variable but different datatype
   char l = 'M';
   float m = 3.5;
   int q = 4;
   printf("Performing operations on local variables of scope function\n");
   printf("Character in variable l is :%c\n", l);
   printf("Product of m and q is :%f\n", m * q);
}

int main()
{
   // l,m,p,q are local variable of main function
   int l = 20, m = 40;
   float p = 24.5;
   float q;

   {
      float l=20.3;
      float m=3.2;
      printf("Performing operations on local variables of block\n");
      printf("Addition of l and m is :%f\n", l + m);
   }

   printf("Performing operations on local variables of main function\n");
   printf("Addition of l and m is :%d\n", l + m);
   q = l + p;
   printf("Addition of p and l is :%f\n", q);
   printf("Performing operations on global variables \n");
   printf("Addition of a and b is :%d\n", a + b);
   printf("The character stored in C is :%c\n", c);
   e = b + d;
   printf("Addition of b and d is :%f\n", e);

   scope();
   return 0;
}