#include<iostream>
using namespace std;

int main(){
 int arr[3][3]={1,2,3,4,5,6,7,8,9};
int sum1=0,sum2=0;
int i=0;
   while(i<3){
    sum1+=arr[i][i];
    i++;
   }
int j=2,k=0;
while(j>=0){
  sum2+=arr[k][j];
  k++;
  j--;
}
int middle=3/2;
int ans=(sum1+sum2)-arr[middle][middle];

cout<<ans;
}