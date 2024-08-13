#include <iostream>
using namespace std;
class Node
{
public:
  int data;
  Node *left; 
  Node *right;

  Node(int p)
  {
    data = p;
    left = right = NULL;
  }
};

Node *BinaryTree()
{
  // base case
  
  int x;
  cin >> x;
  if (x == -1)
  {
    return NULL;
  }
  // creating a node
  Node *temp = new Node(x);

  // left side
  cout<<"Enter left child of "<<x<<" :";
  temp->left = BinaryTree();
  // rightside
  cout<<"Enter right child of "<<x<<" :";
  temp->right=BinaryTree();
  return temp;
}

// pre order traversal  Node Left Right:NLR
void preorder(Node *root){
  if(root==NULL){
    return;
  }
  //node ko print kro
  cout<<root->data<<" ";
  //left mai jao
  preorder(root->left);
  //right m jao
  preorder(root->right);
}

// in order traversal  Left Node Right:LNR

void inorder(Node *root){
  if(root==NULL){
    return;
  }
  
  //left mai jao
  inorder(root->left);
  //node ko print kro
  cout<<root->data<<" ";
  //right m jao
  inorder(root->right);
}

//post order traversal Left right Node :LRN
void postorder(Node *root){
  if(root==NULL){
    return ;
  }
  //left
  postorder(root->left);
  // right
  postorder(root->right);
  //print node data
  cout<<root->data<<" ";
}

int main()
{
  
  cout<<"Enter the root element of the Tree:";
  
  Node *root=BinaryTree();
  preorder(root);
  cout<<endl;
  inorder(root);
  cout<<endl;
  postorder(root);
  return 0;
}
