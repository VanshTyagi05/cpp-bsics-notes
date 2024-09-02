#include <iostream>

using namespace std;


void Heapify(int arr[],int idx,int size){
  int largest=idx;
  int left=2*idx+1;
  int right=2*idx+2;
  // laregst will store the idx of element whic is largets among the parents and its children
  if (left<size && arr[left]>arr[largest]){
    largest=left;

  }

  if(right<size && arr[right]>arr[largest]){
    largest=right;
  }
  
  if(largest!=idx){
    swap(arr[idx],arr[largest]);
    Heapify(arr,largest,size);
  }
}

void Buildmaxheap(int arr[],int n){
  // step down
  for(int i=(n/2)-1;i>=0;i--){
    Heapify(arr,i,n);
  }
}

void sortArray(int arr[],int n){
  for(int i=n-1;i>=0;i--){
    swap(arr[0],arr[i]);
    Heapify(arr,0,i);
    // i is here denoting the size or array whicjj is continuosluy changing becase the largest is swappped by last\

  }
}
void print(int arr[],int size){
    for(int i=0;i<size;i++){
      cout<<arr[i]<<" ";
       
    }
    cout<<endl;
  }

int main()
{
  int arr[]={10,3,8,9,5,13,18,14,11,70};
  Buildmaxheap(arr,10);
  sortArray(arr,10);
  print(arr,10);
  
  
  return 0;
}
