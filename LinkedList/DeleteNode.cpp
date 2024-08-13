#include <iostream>
using namespace std;

class NODE
{
public:
  int data;
  NODE *next;

  NODE(int a)
  {
    data = a;
    next = NULL;
  }
};

int main()
{

  NODE *head;
  head = NULL;
  int arr[] = {2, 4, 6, 8, 10, 12};

  for (int i = 0; i < 6; i++)
  {
    if (head == NULL)
    {
      head = new NODE(arr[i]);
    }
    else
    {
      NODE *temp;
      temp = new NODE(arr[i]);
      temp->next = head;
      head = temp;
    }
  }
  cout << "Initail Node list: ";
  NODE *temp = head;
  while (temp)
  {
    cout << temp->data << " ";
    temp = temp->next;
  } // giving ouput as 12 10 8 6 4 2

  //  deleting the  first node of linked List
  if (head != NULL)
  {
    NODE *del = head;
    head = head->next;
    delete del;
  }

  cout << endl;
  cout << "Linked list After Deletion from Begining:";
  NODE *temp1 = head;
  while (temp1)
  {
    cout << temp1->data << " ";
    temp1 = temp1->next;
  } // giving ouput as 10 8 6 4 2

  // deleting a node from last

  // Checkking the edge Cases is equally important
  // no linkedLsit is pressent i.e Head==Null
  // only one elemeent is present
  // more than 1 element is there

  if (head != NULL)
  {
    if (head->next == NULL)
    {
      NODE *temp = head;
      delete temp;
      head = NULL;
    }

    else
    {
      NODE *curr = head;
      NODE *prev = NULL;
      while (curr->next != NULL)
      {
        prev = curr;
        curr = curr->next;
      }
      delete curr;

      prev->next = NULL;
    }
  }

  // printing the node list
  cout << endl;
  cout << "Node List after Deleting the Last Node:";
  NODE *temp2 = head;
  while (temp2)
  {
    cout << temp2->data << " ";
    temp2 = temp2->next;
  } // giving ouput as 10 8 6 4

  return 0;
}
