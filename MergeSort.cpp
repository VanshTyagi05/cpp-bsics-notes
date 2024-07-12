#include <iostream>
#include<vector>
using namespace std;
void merge(int arr[],int start,int mid,int end){
  vector<int>temp(end-start+1);
  int left=start,right=mid+1,index=0;
  while(left<=mid && right<=end){
    if(arr[left]<=arr[right]){
      temp[index]=arr[left];
      index++,left++;

    }
    else{
       temp[index]=arr[right];
      index++,right++;
    }
  }

  // still some elements are left in left side array
  while(left<=mid){
    temp[index]=arr[left];
      index++,left++;
  }
  // if elemnets are left in the right side sarray
  while(right<=end){
    temp[index]=arr[right];
      index++,right++;
  }
  // now filling the original array from the temp vector
  index=0;
  while(start<=end){
    arr[start]=temp[index];
    start++;
    index++;
  }
}
 void mergesort(int arr[], int start, int end){
  if(start==end){
    return;
  }
  int mid=start+(end-start)/2;
  // left side division
  mergesort(arr,start,mid);
  //right side division of array
  mergesort(arr,mid+1,end);
  //now merging with help of external function
  merge(arr,start,mid,end);

 }


int main()
{
  int arr[8]={8,7,6,5,4,3,2,1};
  mergesort(arr,0,7);
  for(int i=0;i<8;i++){
    cout<<arr[i]<<" ";
  }
  
  
  return 0;
}
