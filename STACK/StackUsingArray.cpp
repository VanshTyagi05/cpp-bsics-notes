#include <iostream>
using namespace std;

class Stack{
  int top;
  int size;
  int *arr;
  public:
  Stack(int a){
    size=a;
    arr=new int[a];
   top=-1;
  }
// basic functions of Stack are:- push pop sizeof IsEmpty  peek
  void push(int val){
    if(top==size-1){
      cout<<"Stack Overflow";

    }
    else{
      top++;
      arr[top]=val;
      cout<<"Pushed "<<val<<" into the Stack"<<endl;

    }

  }
  void pop(){
    if(top==-1){
      cout<<"Stack UnderFlow";
    }
    else{
      top--;
    }
  }

  int peek(){
    if(top==-1){
      return -1;
    }
    else {
      return arr[top];
    }
  }

  int isSize(){
    if(top==-1){
      return 0;
    }
    else{
      return top+1;
    }

  }

  bool isEmpty(){
    return top==-1;
  }
};

int main()
{
   Stack S(5);
   S.push(5);
   S.push(4);
   S.push(3);
   S.push(2);
   S.push(1);
  cout<< S.isSize()<<endl;
  S.pop();
  cout<< S.isSize()<<endl;
  S.pop();
  S.pop();
  S.pop();
  S.pop();
  cout<<S.isEmpty();
  return 0;
}
