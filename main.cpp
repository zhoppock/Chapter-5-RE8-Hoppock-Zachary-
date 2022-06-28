#include <iostream>
using namespace std;

int a = 0; //a in GLOBAL SCOPE
int b = 0; //b in GLOBAL SCOPE
int f(int c) //c in FUNCTION f SCOPE
{
   int n = 0; //n in FUNCTION f SCOPE
   a = c; //a in GLOBAL SCOPE
   if (n < c) //n and c in FUNCTION f SCOPE
   {
      n = a + b; //n in FUNCTION f SCOPE; a and b in GLOBAL SCOPE
   }
   return n; //n in FUNCTION f SCOPE
}
  
int g(int c) //c in FUNCTION g SCOPE
{
   int n = 0; //n in FUNCTION g SCOPE
   int a = c; //a in FUNCTION g SCOPE
   if (n < f(c)) //n and c in FUNCTION g SCOPE
   {
      n = a + b; //n and a in FUNCTION g SCOPE; b in GLOBAL SCOPE
   }
   return n; //n in FUNCTION g SCOPE
}
  
int main()
{
   int i = 1; //i in MAIN SCOPE
   int b = g(i); //b in MAIN SCOPE
   cout << a + b + i << endl; //a in GLOBAL SCOPE; b and i in MAIN SCOPE
   return 0;
}