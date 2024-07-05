#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool hasRepeatingCharacters(const string& str, int start, int end) {
    vector<int> charCount(256, 0); // Array to store the frequency of characters
    for (int i = start; i <= end; ++i) {
        charCount[str[i]]++;
      }
      int distinctElements=0;
      for(int i=0;i<256;i++){
        if(charCount[i]!=0){
           distinctElements++;
        }
      }
      // distsinct element is now having the number of distinct characters present in the substring
    }
    


int lengthOfLongestSubstringBruteForce
(string s) {
    int n = s.size();
    

    for (int i = 0; i < n; ++i) {
        for (int j = i; j < n; ++j) {
            // if (!hasRepeatingCharacters(s, i, j)) {
                
            // }
            cout<<s.substr(i,j)<<endl;
        }
    }

    return 0;
}

int main() {
    string s = "abcabcbb";
    int result = lengthOfLongestSubstringBruteForce(s);
    cout << "Length of the longest substring without repeating characters (Brute Force): " << result << endl;
    return 0;
}