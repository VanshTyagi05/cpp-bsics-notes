#include <iostream>
#include<vector>
using namespace std;

void print(int arr[],int index,int n,int sum,vector<int>&ans){
 if(index==n){
  ans.push_back(sum);
  return;
 }

  //not include
  print(arr,index+1,n,sum,ans);

  //include
  print(arr,index+1,n,sum+arr[index],ans);
}
int main()
{
  int arr[]={-1,0,1,2,-1,-4};
  vector<int>ans;
  
  print(arr,0,6,0,ans);
  for(int i=0;i<ans.size();i++){
    cout<<ans[i];
  }
  
  
  return 0;
}
