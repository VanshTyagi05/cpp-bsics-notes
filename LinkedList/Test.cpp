#include <iostream>
using namespace std;

  


int main()
{
  int arr[]={2,4,3};
  int size=3;
  int sum=0,mul=1;
  int i=0;
  while(i<size){
    sum=sum+arr[i]*mul;
    mul=mul*10;
    i++;
  }
  cout<<sum<<" ";
 
  return 0;
}
