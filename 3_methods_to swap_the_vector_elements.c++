#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
  vector<int> nums = { 6 , 5, 4, 3, 2, 1 };

  // Method One

  ///reverse(nums.begin(), nums.end());

  // Method Two

  ///nums= vector<int>(nums.rbegin(),nums.rend());
  // rbegin Return reverse iterator to reverse beginning
  // rend 	Return reverse iterator to reverse end

  // Method Three -> Use Swap + Loop For Challenge
  for(int i=0;i<(nums.size()/2);i++){
    swap(nums[i],nums[nums.size()-1-i]);
  }



  for (int i : nums)
  {
    cout << i << " ";
  }

  return 0;
}

