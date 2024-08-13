#include <iostream>
using namespace std;
#include<vector>
struct ListNode {
     int val;
     ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
int main()
{
   int size1=0,size2=0;
        ListNode *temp1=l1;
        ListNode *temp2=l2;
        while(temp1){
            size1++;
            temp1=temp1->next;
        }
        while(temp2){
            size2++;
            temp2=temp2->next;
        }
        long long sum1=0;
        int mul=1;
         int i=0;
         temp1=l1;
         while(i<size1){
          sum1=sum1+(temp1->val)*mul;
           mul=mul*10;
           temp1=temp1->next;
           i++;
          }


          long long sum2=0;
          mul=1;
         i=0;
         temp2=l2;
         while(i<size2){
          sum2=sum2+(temp2->val)*mul;
          temp2=temp2->next;
           mul=mul*10;
           i++;
          }
          // now forming the new node list
          long long sum3=sum1+sum2;
          // sum3=708
          vector<int>arr;
          while(sum3){
               arr.push_back(sum3%10);
               sum3/=10;
          }
          //arr={8,0,7}
          ListNode *head;
          head=NULL;
          for (int i = 0; i < 4; i++)
  {
    if (head == NULL)
    {
      head = new ListNode(arr[i]);
    }
    else
    {
      ListNode *temp;
      temp = new ListNode(arr[i]);
      temp->next = head;
      head = temp;
    }
  }
  return head;
    }
  
  system("pause");
  return 0;
}
