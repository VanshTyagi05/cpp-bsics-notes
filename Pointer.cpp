#include <iostream>
#include <vector>
using namespace std;
void fun(int *p){
  *p=*p+5;
}
int main()
{
  // int a=10;
  // int *ptr=&a;
  // cout<<*ptr<<endl;
  // cout<<ptr<<endl;
  // int b=20;
  // ptr=&b;
  // cout<<*ptr<<endl;
  // cout<<ptr<<endl;

  // int arr[5] = {1, 2, 3, 4, 5};
  // // arr points the address of first element
  // cout << arr << endl;
  // int *ptr = arr;
  // // there are four different methods of printing array elements
  // cout << *ptr << endl;      // will give 1
  // cout << *++ptr << endl;    // will give 2
  // cout << arr[2]<<endl;      // will give 3
  // cout << *(arr + 3)<<endl;     // will give 4

  // char a='b';
  // cout<<a<<endl;
  // char *ptr=&a;
  // cout<<ptr;// not giving true results
  // char arr[4]={1,2,3,4}; uncomment this... you will get adress as ☺☻♥♦
  // char arr[5]="1234"; // alwas last element of character array is null elemnent which is '\0
  // cout<<arr<<endl;
  // char *ptr=arr;// 1234 is output
  // cout<<ptr<<endl;
  // cout<<(void*)ptr<<endl;// 0x61ff07 is output
  // cout<<(void*)arr<<endl;
  // char name='a';
  // cout<<(void*)&name;

  // +++++++++++++++++++MULTIPLE POINTER++++++++++++++++

  int a=10;
  int *p=&a;//single
  int **p2=&p;//double
  int ***p3=&p2;//triple pointer
  int ****p4=&p3;//quadra pointer
  // cout<<p<<endl;
  // cout<<p2<<endl;
  // cout<<p3<<endl;
  // cout<<p4<<endl;
  // value ko modify karna hai agr
    // *p=*p+4;
    // cout<<a<<endl; //14
    // **p2=**p2+5;
    // cout<<a<<endl;//19 as output

 fun(p);//function that will increase value of a by 5
 cout<<a<<endl;
}