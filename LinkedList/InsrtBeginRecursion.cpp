#include <iostream>
using namespace std;
class Node{
public:
int data;
Node *next;

Node(int a){
  data=a;
  next=NULL;
}
};

Node* createLinkedList(int arr[],int idx,int size, Node* prev){
  //Base Case
  if(idx==size){
    return prev;

  }
  //Creatong a node
  Node *temp;
  temp=new Node(arr[idx]); //temp will store the address of newly created node;
  temp->next=prev;
 

  // calling the fumction for returning the address 
   return createLinkedList(arr,idx+1,size,temp);
}
int main()
{
  int arr[]={2,3,4};
  Node *Head;
  Head=createLinkedList(arr,0,3,NULL);
  // now printing the ll
  Node *temp;
  temp=Head;
  while(temp){
    cout<<temp->data<<" ";
    temp=temp->next;
  }
  
  
  return 0;
}
