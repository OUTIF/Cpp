#include <iostream>
#include <array>
#include <cstdlib>
#include <ctime>

using namespace std;

// This function goal if to sort the array in a (ascending order).
void sort_sl(int a[],int s);
// This function goal if to sort the array in a (descending order).
void sort_ls(int a[],int s);

int main(){

   srand(time(NULL));
   int nums[4];
   int size_of_array=sizeof(nums)/sizeof(int);
   // this loop is to initializing the array data with random numbers between 0 and 100 .
   for(int i=0;i<size_of_array;i++){
      int randomnumber=rand()%101;
      nums[i]=randomnumber;
   }

   //outputting The orginal array.
   cout<<"This is the output of the orginal array: ";
   for(int i=0;i<size_of_array;i++)cout<<nums[i]<<" ";
   cout<<"\n";

   sort_ls(nums,size_of_array);
   sort_sl(nums,size_of_array);

   return 0;
}



void sort_sl(int a[],int s){
   int hold;
   for(int i=0;i<s;i++){
      for (int j = i; j > 0; j--) { 
         if (a[j] < a[j - 1]) { 
            swap(a[j-1], a[j]);
         }
     }
   }
   cout<<"This is the output of the (ascending order) function: ";
   for(int index=0;index<s;index++)cout<<a[index]<<" ";
   cout<<"\n";
}

void sort_ls(int a[],int s){
   for(int i=0;i<s-1;i++){
      for(int j=0; j<s-1-i; j++){
         if(a[j]<a[j+1]){
            swap(a[j], a[j + 1]);
         }
      }

   }
   cout<<"This is the output of the (descending order) function: ";
   for(int index=0;index<s;index++)cout<<a[index]<<" ";
   cout<<"\n";
}
