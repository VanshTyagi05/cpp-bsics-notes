#include<iostream>
using namespace std;
// reference variable method
// void swap(int &a, int &b){
//   int c=a;
//   a=b;
//   b=c;

// }
//address or pointer method
void swap(int *a, int *b){
  int c=*a;
  *a=*b;
  *b=c;

}
int main(){
  int x=2,y=4;
  // swap(x,y);//for case 1
  swap(&x,&y);
  cout<<x<<" "<<y;
}