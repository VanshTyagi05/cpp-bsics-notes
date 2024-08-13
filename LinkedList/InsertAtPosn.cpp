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
   int arr[]={2,3,4,6,10};
  Node *Head;
  Head=createLinkedList(arr,0,5,NULL);
  // now printing the ll
  // Node *temp;
  // temp=Head;
  // while(temp){
  //   cout<<temp->data<<" ";
  //   temp=temp->next;
  // }
  
  // linkedList is 10->6->4->3->2
  //printing the previsous linkedlist
  Node *print0;
 print0=Head;
 while(print0){
  cout<<print0->data<<" ";
  print0=print0->next;
 }
cout<<endl;
  // now creating a node at particular posistion
 int x=3; //insert position 
 int value=30;

 Node *temp=Head;
 x--;
 while(x--){
   temp=temp->next;
 }

 Node *temp2;
 temp2=new Node(value);
 temp2->next=temp->next;
 temp->next=temp2;

 //now printing the ll
 Node *print;
 print=Head;
 while(print){
  cout<<print->data<<" ";
  print=print->next;
 }

  
  return 0;
}
