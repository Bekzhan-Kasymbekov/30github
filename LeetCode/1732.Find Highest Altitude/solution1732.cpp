#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int startAltitude = 0;
        int currentHighestAltitude = 0;
        int currentAltitude = 0;
        int arraySize = gain.size();

        for (int i = 0; i < arraySize; i++) {
            currentAltitude += gain[i];
            if (currentAltitude > currentHighestAltitude) {
                currentHighestAltitude = currentAltitude;
            }
        }
        return currentHighestAltitude;
    }
};

int main() {
    int n;
    cout << "Enter the number of altitude changes: ";
    cin >> n;

    vector<int> gain(n);
    cout << "Enter the altitude changes: ";
    for (int i = 0; i < n; i++) {
        cin >> gain[i];
    }

    Solution solution;
    int result = solution.largestAltitude(gain);

    cout << "The highest altitude reached is: " << result << endl;

    return 0;
}
