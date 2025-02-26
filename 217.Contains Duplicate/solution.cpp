#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

class Solution {
  public:
    bool containDuplicate(vector<int>& nums) {
      unordered_set<int> seen;
      for(int num : nums){
        if (seen.count(num)){
          return true;
        }
        seen.insert(num);
      }
      return false;
    }
};

int main() {
  Solution solution;

  vector<int> nums1 = {1, 2, 3, 4, 5, 1};
  cout << "Test Case 2: " << (solution.containDuplicate(nums1) ? "True" : "False");

    return 0;
  
}
