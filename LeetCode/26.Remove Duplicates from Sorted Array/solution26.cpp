#include <iostream>
#include <vector>

using namespace std;

class Solution {
  public: 
    int removeDuplicates(vector<int>& nums) {
      if (nums.empty()) return 0;

      int writeIndex = 1;

      for(int i = 1; i < nums.size(); i++){
        if(nums[i] != nums[i-1]){
         nums[writeIndex] = nums[i]; 
          writeIndex++;
          
        }
      }
      return writeIndex;
    }
};

int main() {
  Solution solution;
  vector<int> nums = {1, 1, 2};

  int newLength = solution.removeDuplicates(nums);

  //Output the modified array up to newLength
  cout << "New Length: " << newLength << endl;
  cout << "Modified Array: [";
  for (int i = 0; i < newLength; i++) {
    cout << nums[i];
    if (i < newLength - 1) cout << ", ";
  }
  cout << "]" << endl;

  return 0;
}
