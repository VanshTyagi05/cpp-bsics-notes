#include<iostream>
using namespace std;
int main(){
  // string s1;
  // cout<<"enter string";
  // cin>>s1;
  // cout<<s1;
  // //to print complete line with space  getline is used
  // string s2;
  // cout<<"ENter another String";
  // getline(cin,s2);
  // cout<<s2;
  //print vansh is "good " boy
  // '\' is called escape operator

  // string s3="vansh is \"good\" boy";
  // cout<<s3;


// you can also append
  // string s4="rohit",s5="mohit";
  // string s6=s4+s5;
  // s6.push_back('g');
  // s6.push_back('l');

  // cout<<s6<<endl;
  // cout<<s6.size()<<endl;
  // s6.pop_back();
  // cout<<s6<<endl;
  // cout<<s6.size();


// reverse a string

// string s8="vanshtyagi";
// cout<<s8<<endl;
// int start=0,end=s8.size()-1;
// while(start<=end){
//   swap(s8[start],s8[end]);
//   start++;
//   end--;
// }

// cout<<s8;

string s9="vansh tyagi";
// cout<<s9.size(); // giving output 11

int size=0;
while(s9[size]!='\0') 
// '\0' denotes null while  " " is space which is considered in size
size++;
cout<<size;
}
