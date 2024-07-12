#include <iostream>
using namespace std;

int partition(int arr[],int start,int end){
 int pos=start;
 for(int i=start;i<=end;i++){
   if(arr[i]<=arr[end]){
    swap(arr[i],arr[pos]);
    pos++;
   }
 }
 return pos-1;
}

void quicksort(int arr[],int start, int end){
  if(start>=end){
    return;
  }
  int pivot=partition(arr,start,end);
  cout<<pivot<<" ";
  //left side
  quicksort(arr,start,pivot-1); 

  // right side
  quicksort(arr,pivot,end);

}
int main()
{
  
  int arr[]={3,6,8,10,1,2,1};
  quicksort(arr,0,6);
 for(int i=0;i<=9;i++){
  cout<<arr[i]<<" ";
 }
  return 0;
}
