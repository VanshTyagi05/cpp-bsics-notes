#include <iostream>
using namespace std;

class Node{
  public:
  int data;
  Node *next;
  Node *prev;
  Node(int val){
    data=val;
    next=NULL;
    prev=NULL;

  }
};

int main()
{
  int arr[]={1,2,3,4,5};
  Node *head=NULL,*tail=NULL;

  for(int i=0;i<5;i++){
    if(head==NULL){
      head=new Node(arr[i]);
      tail=head;
    }
    else{
      Node *temp=new Node(arr[i]);
      tail->next=temp;
      temp->prev=tail;
      tail=temp;
    }

  }

   Node *print=head;
   while (print)
   { //cout<<print->prev<<" ";
    cout<<print->data<<" ";
    // cout<<print->next<<" ";
    // cout<<endl;
    print=print->next;
   }
   
  
  
  return 0;
}
