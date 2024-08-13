#include <iostream>
#include<stack>
using namespace std;
 int minToAdd1(string s){
  int left=0,count=0;
  for(int i=0;i<s.size();i++){
    if(s[i]=='('){
      left++;
    }else{
      if(left==0){
        count++;
      }
      else{
        left--;
      }
    }
  }

  return left+count;
 }

//using stack
 int minToAdd2(string s){
  stack<char>st;
  int count=0;
  for(int i=0;i<s.size();i++){
    if(s[i]=='('){
      st.push(s[i]);
    }else{
      if(st.empty()){
        count++;
      }
      else{
        st.pop();
      }
    }
  }

  return count+st.size();
 }
int main()
{
  string s="(()))(";
  cout<<minToAdd1(s)<<endl;
cout<<minToAdd2(s)<<endl;
 
  return 0;
}
