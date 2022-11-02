#include <iostream>
using namespace std;

   int main() {
      int a = 10;
      int b = 0;

      // code that may raise exception
      if(b==0){
         cout<<"Division not possible denominator is zero"<<endl;
      }
      else{
         int c = a / b;
         cout<<"division is :"<<c<<endl;
      }
      // rest code of the program
      cout<<"rest of program"<<endl;
      return 0;
   }
