#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i = 0, j = 0;
        while (j < t.length() && i < s.length()) {
            if (t[j] == s[i]) {
                i++;
            }
            j++;
        }
        return i == s.length();
    }
};

int main() {
    string s, t;
    
    // Get user input
    cout << "Enter string s: ";
    cin >> s;
    cout << "Enter string t: ";
    cin >> t;

    // Create an instance of Solution and call isSubsequence
    Solution solution;
    bool result = solution.isSubsequence(s, t);

    // Output result
    if (result) {
        cout << "Yes, \"" << s << "\" is a subsequence of \"" << t << "\"." << endl;
    } else {
        cout << "No, \"" << s << "\" is NOT a subsequence of \"" << t << "\"." << endl;
    }

    return 0;
}