#include <iostream>
using namespace std;
int subset(int arr[],int idx,int sum, int n){
  if(idx==n){
    if(sum==0){
      return 1;
    } 
    else return 0;
     }
  return subset(arr,idx+1,sum,n)+subset(arr,idx+1,sum-arr[idx],n);

}

int main()
{
  
  int arr[]={2,5,6,1,3};
  int sum=8;
  cout<<subset(arr,0,sum,5)<<endl;
 
  return 0;
}
