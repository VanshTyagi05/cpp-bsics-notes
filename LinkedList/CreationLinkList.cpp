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
  int arr[] = {2, 4, 6, 8};

  for (int i = 0; i < 4; i++)
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

  NODE *temp=head;
  while (temp)
  {
    cout<<temp->data<<" ";
    temp=temp->next;
  }
  


  return 0;
}
