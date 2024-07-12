#include <iostream>
#include <vector>
using namespace std;
void parenth(int n,int left,int right,vector<string>& ans,string &temp){
    if(left+right==2*n){
        ans.push_back(temp);
        return;
    }

    //left parenthesis add
    if(left<n){
        temp.push_back('(');
        parenth(n,left+1,right,ans,temp);
        temp.pop_back();
    }

    //right parenthesis
     if(right<left){
        temp.push_back(')');
        parenth(n,left,right+1,ans,temp);
        temp.pop_back();
    }
}
 int main()
{
    int n;
    cin>>n;
        vector<string>ans;
        string temp;
        parenth(n,0,0,ans,temp);

      for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
      } 
    
  
  return 0;
  
}
