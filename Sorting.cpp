#include<iostream>
using namespace std;

int main(){
int arr[1000];
cout<<"Enter The number of elements in array less than 1000: ";
int n;
cin>>n;
cout<<"Enter array elemnts: ";

for(int i=0;i<n;i++){
  cin>>arr[i];
}

// ++++++++++++ SELECTION SORT ++++++++++++++++++++++++++

// for(int i=0;i<(n-1);i++){
//  int min_idx=i; // assuming minimum element at idx=i
//  for(int j=(i+1);j<n;j++){
//   if(arr[min_idx]>arr[j]){
//     min_idx=j;  // finding actual minimum element and its index value is stored in min_idx
//   }
//   swap(arr[min_idx],arr[i]);// swapping the elemnt at i with minimum elemnent

//  }
// }


// NOW TO ARRANGE IN DESCENDIGN ORDER

//  for(int i=0;i<n-1;i++){
//    int idx=i;
//    for(int j=i+1;j<n; j++){
//       if(arr[idx]<arr[j])
//       idx=j;
//    }
//    swap(arr[idx],arr[i]);


//  }





//++++++++++++ BUBBLE SORT ++++++++++++++++++++++++++

// for(int i=(n-2);i>=0;i--){
//   bool swapped=0;  // this is for checking that this is case of worddt scenerio or best case
//  for(int j=0;j<=i;j++){
//   if(arr[j]>arr[j+1]){
//      swap(arr[j],arr[j+1]);
//      swapped=1;
//   }
//   if(swapped==0){
//     break;
//   }
//  }
// }





//++++++++++++++++++++++ INSERTION SORT ++++++++++++++++++++++++++++++++++++=

 // Ascending Order
// for(int i=1;i<=n-1;i++){
   
//    for(int j=i;j>0; j--){
//       if(arr[j]<arr[j-1])
//        swap(arr[j],arr[j-1]);
//        else break;
//    }
  


//  }


// Decending order

// for(int i=1;i<=n-1;i++){
   
//    for(int j=i;j>0; j--){
//       if(arr[j]>arr[j-1])
//        swap(arr[j],arr[j-1]);
//        else break;
//    }
  


//  }

// Ascending order but comparing starting from second last elemnt
// for(int i=n-1;i>0;i--){
   
//    for(int j=i;j>0; j--){
//       if(arr[j]<arr[j-1])
//        swap(arr[j],arr[j-1]);
       
//    }
  
// but it is having more unneccesary loops.
// test case:- 3 1 2 4 5 

 //}

for(int i=0;i<n;i++){
  cout<<arr[i]<<" ";
}




}