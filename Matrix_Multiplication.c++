#include <iostream>

using namespace std;

#define row 2
#define column 3
#define row2 3
#define column2 3

void matrixprint(int m[][column],int r,int c);

int main(){

   int mresult[row][column2]={0};
   
   int m1[row][column]={
      {1,2,3},
      {4,5,6}
   };

   int m2[row2][column2]={
      {9,8,7},
      {6,5,4},
      {3,2,1}
   };

   int msize=sizeof(m1)/sizeof(int);
   int msize2=sizeof(m2)/sizeof(int);
   
// Computing the Matrix Multiplication.
   for(int i=0;i<row;i++){
      for(int j=0;j<column2;j++){
         for(int k=0;k<column;k++){
            mresult[i][j]+=m1[i][k]*m2[k][j];
         }
      }
   }
   
   cout<<"\nThe First matrix :\n";
   matrixprint(m1,row,column);
   cout<<"\nThe Second matrix :\n";
   matrixprint(m2,row2,column2);

   cout<<"\nThe Result of Matrix Multiplication :\n";
   matrixprint(mresult,row,column2);
   cout<<"\n";
   return 0;
}


void matrixprint(int m[][column],int r,int c){

   for(int i=0;i<r;i++){
      for(int j=0;j<c;j++){
         cout<<(m[i][j])<<" ";
      }
      cout<<endl;
   }

}
