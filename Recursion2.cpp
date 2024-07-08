#include <iostream>
using namespace std;
int factorial(int n){
  if(n==0 || n==1){
    return 1;
  }
  return n*factorial(n-1);
}
//calculating the sum of 1 to N
int sum(int n){
  if(n==1){
    return 1;
  }
  return n+sum(n-1);
}
// power of any integer to k
int pow(int n,int k){
  if(k==1){
    return n;
  }
  return n*pow(n,k-1);
}
int main()
{
  int n;
  cout<<"Enter the Number";
  cin>>n;
  // calculating factorial
  int fact=factorial(n);
  cout<<fact<<endl;
  //calculating sum
  int sum1=sum(n);
  cout<<sum1<<endl;
  //calculating the power
  int k;
  cout<<"Enter the power of number";
  cin>>k;
  int pow1=pow(n,k);
  cout<<pow1<<endl;
  
  return 0;
}
