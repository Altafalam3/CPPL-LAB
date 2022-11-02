#include <iostream>
#include <thread>
#include <unistd.h>
using namespace std;

void task1(int n)
{
   int i;
   for (i = 1; i < 11; i++)
   {
      sleep(1);
      cout << n << "*" << i << "=" << (i * n) << endl;
   }
}

void task2()
{
   for (char c = 'A'; c <= 'Z'; c++)
   {
      sleep(2);
      cout << c << endl;
   }
}

int main()
{
   int num;
   cout << "Enter a number" << endl;
   cin >> num;

   thread t1(task1, num);
   thread t2(task2);

   t1.join();
   t2.join();

   return 0;
}