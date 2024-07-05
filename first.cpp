#include<iostream>
using namespace std;
int main(){
  // int n;
  // cout<< "Enter the number";
  // cin>> n;
  // prime pr not
  // int i=2;
  // while(i<n){
  //   if(n%i==0){
  //     cout<<n<< " is Not a prime number"<< endl;
  //       return 0;
  //   }
  //   i++;
  //   }
  //  cout<< "Yes it is prime number" << endl;
  //   return 0;

  // for(int i=1;i<=10; i++){
    
  //   cout<<n*i;
    
  // }



// power of n
// int p;
//     cout<<"Enter the power of number";
//     cin>>p;
//     int ans=1;
//     for(int i=1; i<=p; i++){
//       ans=ans*n;
//     }
//   cout<<ans;



// fibonacci series

int a,b,c,n;
a=0;
b=1;
n=10;
cout<<a<<" ";
cout<<b<<" ";
for(int i=1; i<=n; i++){
  c=a+b;
  a=b;
  b=c;
  cout<<c<< " ";

}

  return 0;
}


