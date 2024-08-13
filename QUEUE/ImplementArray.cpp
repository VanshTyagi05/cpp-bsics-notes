#include <iostream>
using namespace std;

class Queue{
int *arr;
int front,rear,size;
Queue(int n){
  arr=new int[n];
  size=n;
  front=rear=-1;
}
 bool isEmpty(){
  return front==-1;

 }
 bool isFull(){
  return rear==size-1;
 }
 // pushing a elemnt inside the queue
void push(int x){
  if(isEmpty()){
    front=rear=0;
    arr[rear]=x;
  }
  else if(isFull()){
    cout<<"Queue OverFlow";
  }
  else{
    rear+=1;
    arr[rear]=x;
    cout<<x<<" pushed in queue"<<endl;
  }
}

void pop(){
  if(isEmpty()){
    cout<<"Queue Is empty";
    return;
  }
  else{
    if(front==rear){
      front=rear=-1;
    }
   else { front+=1;
         cout<<arr[front]<<"poped  from  queue"<<endl;}
  }
}

int start(){
  return arr[front];
}
};


int main()
{
  
  
 
  return 0;
}
