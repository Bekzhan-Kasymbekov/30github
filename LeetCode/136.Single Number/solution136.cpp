#include <vector>
#include <iostream>

class Solution {
public:
    int singleNumber(std::vector<int>& nums) {
        int result = 0;
        for (int num : nums) {
            result ^= num;  // XOR all numbers together
        }
        return result;
    }
};

int main() {
    Solution sol;
    std::vector<int> nums = {4, 1, 2, 1, 2};
    std::cout << "Single number: " << sol.singleNumber(nums) << std::endl;
    return 0;
}
