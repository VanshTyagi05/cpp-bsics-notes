#include <iostream>
using namespace std;
class Node
{
public:
  int data;
  Node *next;

  Node(int a)
  {
    data = a;
    next = NULL;
  }
};

 // USING RECURSION We will create a linked List
 Node* createLinkedList(int arr[],int idx,int size){
   if(idx==size){
    return NULL;
   }
    Node *temp;
    temp=new Node(arr[idx]);
    temp->next=createLinkedList(arr,idx+1,size);
    return temp;
 };

int main()
{
  Node *Head, *Tail;
//  Tail = Head = NULL;
  
   

  int arr[]={2,4,6,8};
  // for(int i=0;i<4;i++){
  //   if(Head==NULL){
  //     Head=new Node(arr[i]);
  //     Tail=Head;
  //   }
  //   else{
  //     // ye e majedaar approach hai!..
  //     Tail->next=new Node(arr[i]);
  //     Tail=Tail->next;
  //   }
  // }


int arr1[]={2,3,4,5,6};
Head=createLinkedList(arr1,0,5);
  // now printing the node
  Node *temp;
  temp=Head;
  while(temp){
    cout<<temp->data<<" ";
    temp=temp->next;
  }



  return 0;
}
