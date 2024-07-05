#include<iostream>
#include <vector>
using namespace std;
 int longestPalindrome(string s) {
         vector<int> alpha(52, 0); // Initialize a vector to count occurrences of each alphabet (both lowercase and uppercase letters)

    // Count occurrences of each character in the string
    for(int i = 0; i < s.size(); i++) {
        if(s[i] >= 'a' && s[i] <= 'z') {
          // [s[i] - 'a'] this number shows at which index increment will take place to add elemnt's occurance
            alpha[s[i] - 'a']++;
        } else if(s[i] >= 'A' && s[i] <= 'Z') {
          //s[i] - 'A' + 26   To handle both lowercase and uppercase characters without using a map, we need to adjust the size of the alpha vector to accommodate both lowercase ('a' to 'z') and uppercase ('A' to 'Z') characters. This means the vector should have 52 elements, with the first 26 for lowercase letters and the next 26 for uppercase letters.  
            alpha[s[i] - 'A' + 26]++;
        }
    }
        
        int ans=0,count=0;
        for(int i=0;i<52;i++){
            if(alpha[i]%2==0){
                //even no of occurance will be added directly to ans
                ans+=alpha[i];
            }
            else{
                ans+=alpha[i]-1;
                count++;
            }
        }
        if(count!=0){
            ans+=1;
        }

        return ans;

    }
int main(){
  string s;
   cout<<"Enter A string in ramdom order"<<endl;
   cin>>s;
   cout<<"Maximum length of palindrome string is"<<longestPalindrome(s);
}