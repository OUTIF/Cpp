#include<iostream>

using namespace std;

int minpositive(int arr[],int numssize){
  int target;
  for(int i=0;i<numssize;i++){
    if(i==0)target=arr[i];
    (arr[i]<target)?target=arr[i]:target=target;
  }
return target;
}  

int main()
{
  int numbers[] = { -10, -20, 15, 100, 10, 5, -50, 0 ,-10,-51}; // 5
  int numssize = sizeof(numbers)/sizeof(int);
  cout << minpositive(numbers, numssize) << "\n";

return 0;
}

