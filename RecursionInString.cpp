#include <iostream>
using namespace std;

//check for palindrome
bool checkpal(string str,int start,int end){
  if(start>=end){
    return 1;
  }
  if(str[start]!=str[end]){
    return 0;
  }

  return checkpal(str,start+1,end-1);
}

//reverse a string
string rev(string str,int start,int end){
  if(start>=end){
    return str;
  }
  char c=str[start];
  str[start]=str[end];
  str[end]=c;

  return rev(str,start+1,end-1);
}

//lower to uppper
void lowertoupper(string &str,int idx){
  if(idx==-1){
    return;
  }
  str[idx]='A'+str[idx]-'a';

    return lowertoupper(str,idx-1);
}
//counting the number of vowels
int countvow(string str,int idx){
  if(idx==-1){
    return 0;
  }
  if(str[idx]=='a' ||str[idx]=='e' ||str[idx]=='i' ||str[idx]=='o' ||str[idx]=='u' )
  {return 1+countvow(str,idx-1);}
  else {return countvow(str,idx-1);}
}

int main()
{
  string str1="namon";

  cout<<checkpal(str1,0,4)<<endl;

 string str2="vansh";
 cout<<rev(str2,0,4)<<endl;
 lowertoupper(str2,4);
 cout<<str2<<endl;
cout<<countvow(str1,4);
  return 0;
}
