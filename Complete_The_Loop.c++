#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
  vector<int> numbers = { 10, 20, 10, 40, 50 };
  vector<int>::iterator iter = numbers.begin();

  for (;;)
  {
    int i=*iter;
    cout<<i<<endl;
    if(i==*(numbers.end()-1))break;
    iter++;

  }

  return 0;
}
