#include <iostream>
#include<stack>
using namespace std;
//using stack 
bool checkvalidity(string s){
  stack<char>check;
  if(s[0]==')'){
    
    return 0;
  }

  for(int i=0;i<s.size();i++){
    if(s[i]=='('){
      check.push(s[i]);
    }
    else if(s[i]==')'){
      if(check.empty()){
        return 0;
      }
      else{
      check.pop();}
    }

    
  }
  return check.empty();
  };

  //without stack
  bool checkValidity2(string s){
    int left=0;
    for(int i=0;i<s.size();i++){
      if(s[i]=='('){
        left++;
      }
      else{
        if(left==0){
          return 0;
        }
        else{
          left--;
        }
      }
    }
    return left==0;
  }

int main()
{
  string s="(((())))";

  // if (checkvalidity(s))
  // {
  //   cout<<"Parenthesis is Valid";
  // }else
  // {
  //   cout<<"Parenthesis is Not Valid";
  // }
  cout<<endl;
  if (checkValidity2(s))
  {
    cout<<"Parenthesis is Valid";
  }else
  {
    cout<<"Parenthesis is Not Valid";
  }
  

  
  
 
  
}
