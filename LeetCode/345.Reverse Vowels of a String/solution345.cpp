#include <stdexcept>
#include <iostream>
#include <string>
using namespace std;

string reverseVowels(string s) {
    int left = 0, right = s.length() - 1;
    string vowels = "aeiouAEIOU";

    while (left < right) {
        // Move left pointer forward until it finds a vowel
        while (left < right && vowels.find(s[left]) == string::npos) {
            left++;
        }
        // Move right pointer backward until it finds a vowel
        while (left < right && vowels.find(s[right]) == string::npos) {
            right--;
        }

        // Swap the vowels
        swap(s[left], s[right]);
        left++;
        right--;
    }
    return s;
}

int main() {
    string input;

    // Get user input
    cout << "Enter a string: ";
    getline(cin, input);

    // Process and output the result
    string result = reverseVowels(input);
    cout << "Reversed vowels: " << result << endl;

    return 0;
}

