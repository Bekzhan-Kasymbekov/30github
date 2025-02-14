#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int tribonacci(int n) {
        if (n == 0) return 0;
        if (n == 1 || n == 2) return 1;

        vector<int> arr = {0, 1, 1};

        for (int i = 3; i <= n; i++) {
            arr.push_back(arr[i-1] + arr[i-2] + arr[i-3]);
        }

        return arr[n];
    }
};

int main() {
    Solution solution;
    int n;

    cout << "Enter a number (n): ";
    cin >> n;

    int result = solution.tribonacci(n);
    cout << "Tribonacci(" << n << ") = " << result << endl;

    return 0;
}
