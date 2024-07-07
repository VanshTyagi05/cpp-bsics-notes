#include <iostream>
using namespace std;
//method 1 that is requiring two parameters 
void print(int num,int N){
  if(num==N){// base case
    cout<<N;
    return;
  }
  cout<<num<<endl; // printing the number
  // again calling the function
  print(num+1,N); 
}

//method 2 that will print with one paramter only
void print1(int num){
 if(num==1){
  cout<<num<<" ";
  return;
 }
 print1(num-1); // calling the function before printing which is called reverse d approach
 cout<<num<<" ";
}

//even numbers Method 1

void printeven(int n,int N){
   if(n>N){
    return;
   }
   cout<<n<<" ";
   printeven(n+2,N);

}
//even numbers method 2
void printeven1(int N){
  if(N==2){
    cout<<2<<" ";
    return;
  }
  printeven1(N-2);
  cout<<N<<" ";
}
// printing the table of any number
void table(int n,int N){
  if(N==10){
    cout<<n<<"*"<<N<<"="<<n*10<<endl;
    return;
  }

  cout<<n<<"*"<<N<<"="<<n*N<<endl;
  table(n,N+1);

}

int factorial(int n){
  
  n=n*(factorial(n-1));
}
int main()
{
  // PRINT NUMBERS FROM 1 TO N  using Recursion
  int n;
  cout<<"ENter the number:";
  cin>>n;
  // print(1,n);  //method1
  //print1(n); //method 2

  //printing even number from 1 to N
  // if(n%2!=0){
  //   n--;
  // }
  //printeven(2,n);
  //printeven1(n);
   table(n,1);
  return 0;
}
