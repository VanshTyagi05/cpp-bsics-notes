#include<iostream>
#include <vector>
using namespace std;

//time complexity is o(n) ans space complexity is O(1). for this code
int main(){
   string s;
   cout<<"Enter A string in ramdom order"<<endl;
   cin>>s;
   cout<<s<<endl;
   vector<int>alpha(26,0);
   for(int i=0;i<s.size();i++){
    // creating a vector thagt will contain occurance for each alphabet
    alpha[s[i]-'a']++;

   }
   string ans;
   for(int i=0;i<26;i++){
    char c='a'+i;
    while(alpha[i]){
      ans+=c;
      alpha[i]--;

    }
   }

   cout<<"Sorted String is: "<<ans;
  


}