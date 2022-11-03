#include <stdio.h>

void swapp(int x, int y)
{
   int temp;
   temp = x;
   x = y;
   y = temp;
}

void swap(int *x, int *y)
{
   int temp;
   temp = *x;
   *x = *y;
   *y = temp;
}

int main()
{
   int r = 10, v = 20;

   printf("\nCall by value function");
   swapp(r, v); // passing value to function
   printf("\nValue of r after value call: %d", r);
   printf("\nValue of v after value call: %d", v);

   printf("\n\nCall by reference function");
   swap(&r, &v); // passing address to function
   printf("\nValue of r after reeference call: %d", r);
   printf("\nValue of v after reeference call: %d", v);

   return 0;
}