#include <iostream>
using namespace std;

 class maxHeap{
    int *arr; // initialize array

    int size;  // current array
    int total_size; // maximum capacity of heap
  
  public:
  maxHeap(int n){
    arr=new int[n];
    size=0;
    total_size=n;

  }

  // insert into heap
  void insert(int val){
    // if space is available or not
    if(size==total_size){
      cout<<"Heap overflow\n";
      return;
    }

    arr[size]=val;
    int index=size;
    size++;

   while(index>0 && arr[(index-1)/2]<arr[index]){

  // jab tak children apne parent se bada hoga tab tak uye kam chlta rhega

    swap(arr[(index-1)/2],arr[index]);
    index=(index-1)/2;

   }

   cout<<arr[index]<<" is inserted into the heap\n";


  }

  void print(){
    for(int i=0;i<size;i++){
      cout<<arr[i]<<" ";
       
    }
    cout<<endl;
  }

void Heapify(int idx){
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
    Heapify(largest);
  }
}


void Delete(){
  // always deletes the top element 
  if(size==0){
    cout<<"Heap Underflow";
    return;
  }

  // Store the root value before replacing
  int deletedValue = arr[0];
  
  // Replace the root with the last element
  arr[0] = arr[size-1];
  
  // Decrease the size
  size--;

  // Heapify the root to maintain heap property
  if(size > 0){
    Heapify(0);
  }

  // Print the deleted value
  cout << deletedValue << " deleted successfully" << endl;
}


 };

int main()
{
   maxHeap H1(7);
   H1.insert(1);
   H1.insert(2);
   H1.insert(3);
   H1.insert(4);
   H1.insert(5);
   H1.print();
   H1.Delete();
   H1.Delete();
   H1.Delete();
   H1.print();
    H1.Delete();
   H1.Delete();
   H1.Delete();
   H1.Delete();
  
  
  return 0;
}

