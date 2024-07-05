#include<iostream>
using namespace std;

main(){
   //heap memory allocation krege using keyword "new"
   int *ptr=new int;
   *ptr=5;
   cout<<*ptr<<endl;
   cout<<ptr<<endl;
 //arrays ke liye use krenge
 int *ptr1=new int[5];
 for(int i=0;i<5;i++){
  cout<<"Enter"<<i<<" elemnt:";
  cin>>ptr1[i];

 }
  for(int i=0;i<5;i++){
  cout<<ptr1[i]<<" ";
  

 }
 delete ptr;
 delete ptr1;
}