#include <iostream>
using namespace std;

int main()
{

   int row, column;

   cout << "rows:";
   cin >> row;
   cout << "column";
   cin >> column;

   int **arr = new int *[row];
   for (int i = 0; i < row; i++)
   {
      arr[i] = new int[column];
   }

   for (int i = 0; i < row; i++)
   {
      for (int j = 0; j < column; j++)
      {
         arr[i][j] = i * column + j;
      }
   }

   for (int i = 0; i < row; i++)
   {
      for (int j = 0; j < column; j++)
      {
         cout << arr[i][j] << " ";
      }
      cout << endl;
   }

   for (int i = 0; i < row; i++)
   {
      delete[] arr[i];
   }

   delete[] arr;

   return 0;
}
