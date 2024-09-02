#include <iostream>
using namespace std;

 class Node{
  public:
  int data;
  Node* left, *right;
  Node(int x){
    data=x;
    left=right=NULL;
  }
 };

 Node* insert(Node* root,int target){
  if(!root){
    // create a node
    Node* temp=new Node(target);
    return temp;
  }
  if(target<root->data){
    root->left=insert(root->left,target);
  }
  else{
    root->right=insert(root->right,target);
  }

  return root;
 }

 //  for traversal
 void print(Node* root){
  if(!root)return;
  
  print(root->left);
  
  print(root->right);
  cout<<root->data<<" ";
 }
int main()
{
  Node *root=NULL;
  int arr[]={1,2,3,4,5,6};
  for(int i=0;i<6;i++)
  root=insert(root,arr[i]);
  
  print(root);
  return 0;
}
