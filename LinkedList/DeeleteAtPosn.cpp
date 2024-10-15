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
  int arr1[] = {2, 3, 4, 5, 6};
  Head = createLinkedList(arr1, 0, 5);
  // now printing the node
  Node *temp;
  temp = Head;
  while (temp)
  {
    cout << temp->data << " ";
    temp = temp->next;
  }
  cout << endl;

  // Deletion of Node present At x position

  int x = 3; // 3rd node will be deleted

  if (x == 1)
  {
    Node *temp = Head;

    Head = Head->next;
    delete temp;
  }

  else
  {
    Node *curr = Head;
    Node *prev = NULL;
   
    while (--x)
    {
      prev = curr;
      curr = curr->next;
    }
    prev->next = curr->next;
    delete curr;
  }

  // deleting multiple nodes whose data value matches target

  // now printing the node
  cout << "linked List after deletion of 3rd Node: ";
  Node *temp2;
  temp2 = Head;
  while (temp2)
  {
    cout << temp2->data << " ";
    temp2 = temp2->next;
  }

  return 0;
}
