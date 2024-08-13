#include <iostream>
#include<queue>
using namespace std;

 class Node{
  public:
  int data;
  Node *left,*right;
  Node(int x){
   data=x;
   left=right=NULL;
  }

 };

int main()
{
  queue<Node*>q;
  int x;
  cout<<"Enter The Root Element:";
  cin>>x;
  Node *root=new Node(x);
  q.push(root);
  int first,second;
   while(!q.empty()){
    // accessing the first address of the queue
    Node *temp=q.front();
    q.pop();

    //leftNode
    cout<<"Enter The left child Element of"<<temp->data<<" :";
    cin>>first;
    if(first!=-1){
       temp->left=new Node(first);
       q.push(temp->left);
    }

    //rightNode
    cout<<"Enter The right child Element of "<<temp->data<<" :";
    cin>>second;
    if(second!=-1){
       temp->right=new Node(second);
       q.push(temp->right);
    }
   }
  
  
  return 0;
}
