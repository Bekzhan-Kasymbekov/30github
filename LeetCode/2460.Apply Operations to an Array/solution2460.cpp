#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        // First pass: Merge adjacent equal numbers
        for (int i = 0; i < nums.size() - 1; i++) {  // Prevent out-of-bounds access
            if (nums[i] == nums[i + 1]) {
                nums[i] *= 2;
                nums[i + 1] = 0;
                i++; // Skip the next element
            }
        }

        // Second pass: Move all zeros to the end
        int writeIndex = 0; // Pointer for non-zero placement
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != 0) {
                swap(nums[i], nums[writeIndex]);
                writeIndex++;
            }
        }

        return nums;
    }
};

int main() {
    Solution solution;
    vector<int> nums = {1, 2, 2, 1, 1, 0}; 

    vector<int> result = solution.applyOperations(nums);

    // Output the modified array
    cout << "Modified Array: [";
    for (size_t i = 0; i < result.size(); i++) {
        cout << result[i];
        if (i < result.size() - 1) cout << ", ";
    }
    cout << "]" << endl;

    return 0;
}
