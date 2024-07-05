#include<iostream>
#include<vector>
using namespace std;

void findAllPrefix(string s){
  vector<string>prefix;
  for(int i=0;i<s.size()-1;i++){
        string temp;
    for(int j=0;j<=i;j++){
       temp+=s[j];
    }
    prefix.push_back(temp);
  }
 
 cout<<prefix[3];
}

int main(){
  string s="ABCDEABCD";
//  findAllPrefix("ABCDEABCD");
     int end=s.size();
     int start=s.size()-1;
     vector<string>suffix();
      while(start>=0){
        cout<<s.substr(start,end)<<endl;
        start--;
      }


};
