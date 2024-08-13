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
Node *createLinkedList(int arr[], int idx, int size)
{
  if (idx == size)
  {
    return NULL;
  }
  Node *temp;
  temp = new Node(arr[idx]);
  temp->next = createLinkedList(arr, idx + 1, size);
  return temp;
};

int main()
{

  Node *Head;
  int arr[] = {6, 2, 6, 3, 4, 6, 6}; // output after deletion of 6 is required
  int target = 6;
  Head = createLinkedList(arr, 0, 7);

  // printing the original linkedlist
  Node *temp = Head;
  while (temp)
  {
    cout << temp->data << " ";
    temp = temp->next;
  }
  cout<<endl;
  //yha se gadbad hai mamla..
  if (Head->data == target)
  {
    // if first element matches the target
    Node *temp = Head;

    Head = Head->next;
    delete temp;
  }

  Node *curr = Head;
  Node *prev = NULL;

  while (curr->next != NULL)
  {

    if (curr->data != target)
    {
      // If the data of curr doesnt matches then we will move forword both curr and prev
      prev = curr;
      curr = curr->next;
    }
    else
    {
      // If target matches with curr->data then we will delete the node
      Node *temp;
      temp = curr;
      prev->next = temp->next;
      //  Now we will delete this temp so move curr forward
      curr = curr->next;
      delete temp;
    }
    // checking for the last element
    if(curr->next==NULL && curr->data==target){
    prev->next = curr->next;
    delete curr;
    }
  }
  //checking for the last element of node
  

  Node *temp1 = Head;
  while (temp1)
  {
    cout << temp1->data << " ";
    temp1 = temp1->next;
  }
  return 0;
}
