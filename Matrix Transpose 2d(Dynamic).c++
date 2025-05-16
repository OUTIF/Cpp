#include <iostream>
#include <cstdlib>
#include <ctime>

#define N 3
using namespace std;

int main()
{
   srand(time(0));
   int random_N = rand() % 101;

   int **arr = new int *[N];
   for (int i = 0; i < N; i++)
   {
      arr[i] = new int[N];
   }

   for (int i = 0; i < N; i++)
   {
      random_N = rand() % 101;
      for (int j = 0; j < N; j++)
      {
         arr[i][j] = random_N;
      }
   }

   cout << "The orignal matrix:" << endl;
   for (int i = 0; i < N; i++)
   {
      for (int j = 0; j < N; j++)
      {
         cout << arr[i][j] << " ";
      }
      cout << endl;
   }

   for (int i = 0; i < N; i++)
   {
      for (int j = i + 1; j < N; j++) // upper triangle "good logic"
      {
         swap(arr[i][j], arr[j][i]);
      }
   }
   cout << "The transpose matrix:" << endl;
   for (int i = 0; i < N; i++)
   {
      for (int j = 0; j < N; j++)
      {
         cout << arr[i][j] << " ";
      }
      cout << endl;
   }

   return 0;
}
