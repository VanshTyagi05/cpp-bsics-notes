#include <iostream>
#include <stack>
using namespace std;

bool checkValidity(string s)
{
  stack<char> st;
  for (int i = 0; i < s.size(); i++)
  {
    if (s[i] == '(' || s[i] == '[' || s[i] == '{')
    {
      st.push(s[i]);
    }
    else 
        if(st.empty()){
          return 0;
        }
      
      else if (s[i] == ')' )
      {
        if( st.top() == '(')
        st.pop();
        else{
          return 0;
        }
      }
      else if (s[i] == ']' )
      { if( st.top() == '[')
        st.pop();
        else{
          return 0;
        }
      }
      else if (s[i] == '}' )
      { if( st.top() == '{')
        st.pop();
        else{
          return 0;
        }
      }
    }

    return st.empty();
  }


int main()
{
  string s="{()[]}";
  cout<<checkValidity(s);

  return 0;
}
