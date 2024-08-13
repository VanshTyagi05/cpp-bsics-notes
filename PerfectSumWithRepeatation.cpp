#include <iostream>
using namespace std;

int subsum(int arr[],int idx,int n,int sum){
  if(idx==n || sum<0)return 0;
  if(sum==0)return 1;

  return subsum(arr,idx+1,n,sum)+subsum(arr,idx,n,sum-arr[idx]);
}


int main()
{
  
  int arr[]={2,3,4};
  cout<<subsum(arr,0,3,6);
 
  return 0;
}
