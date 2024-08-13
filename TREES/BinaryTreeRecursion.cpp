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

int main()
{
  
  cout<<"Enter the root element of the Tree:";
  
  Node *root=BinaryTree();
  return 0;
}
