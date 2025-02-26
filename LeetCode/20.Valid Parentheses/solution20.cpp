#include <iostream>
#include <stack>
#include <string>

using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> open;
        
        for (char character : s) {
            if (character == '(' || character == '{' || character == '[') {
                open.push(character);
            } else {
                if (open.empty()) return false;

                char top = open.top();
                if ((top == '(' && character == ')') ||
                    (top == '{' && character == '}') ||
                    (top == '[' && character == ']')) {
                    open.pop();
                } else {
                    return false;
                }
            }
        }
        return open.empty();
    }
};

int main() {
    Solution solution;

    // Test cases
    cout << boolalpha;  // Print 'true' or 'false'
    cout << solution.isValid("()") << endl;        // true
    cout << solution.isValid("()[]{}") << endl;    // true
    cout << solution.isValid("(]") << endl;        // false
    cout << solution.isValid("([)]") << endl;      // false
    cout << solution.isValid("{[]}") << endl;      // true

    return 0;
}

