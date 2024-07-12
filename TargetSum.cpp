#include <iostream>
using namespace std;
bool sumpossible(int arr[],int index,int n,int target){
   if(target==0){
    return 1;
   }
 if(index==n){
  return 0;
 }
  return sumpossible(arr,index+1,n,target)||sumpossible(arr,index+1,n,target-arr[index]);
}
int main()
{
  int arr[]={2,4,6};
  int target;
  cout<<"Enter The Target: ";
  cin>>target;
  bool res=sumpossible(arr,0,3,target);
 if(res==0){
  cout<<"Not Poossible";
 }
 else {
  cout<<"Yes is is possible";
 }
  
 
  return 0;
}
