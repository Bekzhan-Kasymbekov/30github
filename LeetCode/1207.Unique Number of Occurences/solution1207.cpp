#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>

using namespace std;

class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> frequency_map;  // Stores frequency of each number
        unordered_set<int> occurrences_set;     // Stores unique frequencies

        // Count occurrences of each number
        for (int num : arr) {
            frequency_map[num]++;
        }

        // Check if all frequencies are unique
        for (auto pair : frequency_map) {
            if (occurrences_set.find(pair.second) != occurrences_set.end()) {
                return false;  // Duplicate frequency found
            }
            occurrences_set.insert(pair.second);
        }

        return true;
    }
};

int main() {
    Solution solution;
    vector<int> arr;
    int n, num;

    // User input for array size
    cout << "Enter the number of elements: ";
    cin >> n;

    // User input for array elements
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> num;
        arr.push_back(num);
    }

    // Call function and display result
    bool result = solution.uniqueOccurrences(arr);
    cout << "Unique occurrences? " << (result ? "true" : "false") << endl;

    return 0;
}
