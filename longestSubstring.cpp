#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool hasRepeatingCharacters(const string& str, int start, int end) {
    vector<int> charCount(256, 0); // Array to store the frequency of characters
    for (int i = start; i <= end; ++i) {
        charCount[str[i]]++;
        if (charCount[str[i]] > 1) {
            return true; // Found a repeating character
        }
    }
    return false;
}

int lengthOfLongestSubstringBruteForce(string s) {
    int n = s.size();
    int maxLength = 0;

    for (int i = 0; i < n; ++i) {
        for (int j = i; j < n; ++j) {
            if (!hasRepeatingCharacters(s, i, j)) {
                maxLength = max(maxLength, j - i + 1);
            }
        }
    }

    return maxLength;
}

int main() {
    string s = "abcabcbb";
    int result = lengthOfLongestSubstringBruteForce(s);
    cout << "Length of the longest substring without repeating characters (Brute Force): " << result << endl;
    return 0;
}
