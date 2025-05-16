#include <iostream>

using namespace std;

#define i 2
#define j 3

int main()
{
   int *p = nullptr;
   int M[i][j] = {{1, 2, 3}, {4, 5, 6}};
   p = &M[0][0];

   while (p <= &M[i - 1][j - 1])
   {
      cout << *p++ << " ";
      }

   return 0;
}
