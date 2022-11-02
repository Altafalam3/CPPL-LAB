#include <iostream>
using namespace std;

int main()
{
   int a = 10;
   int b = 0;

   // code that may raise exception
   if (b == 0)
   {
      cout << "Division not possible denominator is zero" << endl;
   }
   else
   {
      int c = a / b;
      cout << "division is :" << c << endl;
   }

   // Array exception
   int size;
   cout << "Enter size of array..."<< endl;
   cin >> size;

   double c[size];
   cout<<"Enter elements of array"<<endl;
   for (int i = 0; i < size; i++)
   {
      cin >> c[i];
   }


// CODE THAT MIGHT LEAD TO AN EXCEPTION
int index=11;
if (index >= size)
{
   cout << "ArrayIndexOutofBounds Exception..." << endl;
}
else{
   cout<<"value at Index is:"<<c[index]<<endl;
}

// rest code of the program
cout << "rest of program" << endl;
return 0;
}
