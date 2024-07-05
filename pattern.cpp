#include<iostream>
using namespace std;

int main(){
  int n;
  cout<< "Enter Number of Rows";
  cin>>n;

// pattern 1
//     1
//    121
//   12321
//  1234321
//   for(int i=1; i<=n; i++){

//     //space 
//    for(int j=1;j<=n-i;j++){
//     cout<<" ";
//    }

// // half pattern
//   for(int j=1;j<=i;j++){
//     cout<<j;
//    }
//    // next half pattern
   
//     for(int j=i-1;j>=1;j--){
//     cout<<j;
//    }
    

   // patter 2

   // for n=5
   // *********
   //  *******
   //   *****
   //    ***
   //     *
  
for(int i=1; i<=n; i++){
    
    // space
     for(int j=1;j<i;j++){
    cout<<" ";
   }


    //stars
   for(int j=(2*(n-i))+1;j>=1;j--){
    cout<<"*";
   }


   
    


   cout<<endl;
  }
 return 0;
}