#include<iostream>
#include<vector>

using namespace std;
int main(){
  string s=" Hello World ";
   int n=s.size();
       int i=0;
       string ans="";
       while(i<n){
        string temp="";
        while(s[i]==' ' && i<n){
            i++;
        }
        while(s[i]!=' '&& i<n){
            temp+=s[i];
            i++;
        }
        if(temp.size()>0){
            if(ans.size()==0){
                ans=temp;
            }
            else{
                ans=temp+" "+ans;
            }
        }
       }
      for(int i=0;i<ans.size();i++){
        cout<<ans[i];
      }

     
       
}

