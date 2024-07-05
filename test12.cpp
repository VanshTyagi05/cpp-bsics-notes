#include<iostream>
#include<vector>
using namespace std;
int main(){
  string s="   fly me   to   the moon  ";
    int n=s.size();
     vector<string>ans;
       string temp=" ";
       for(int i=0;i<n;i++){
        if(s[i]==' '){
          ans.push_back(temp);
          temp=" ";
        }
        else{
          temp+=s[i];
        }
        
       }
        ans.push_back(temp);

      for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<endl;
      }
     
       
}

