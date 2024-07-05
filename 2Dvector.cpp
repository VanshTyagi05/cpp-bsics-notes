#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
  int n,m;
  cout<<" enter number of rows and cols";
  cin>>n>>m;
  //creating a 2d vector;
  vector<vector<int> >matriix(n,vector<int>(m,2));

for(int i=0;i<n;i++){
  for(int j=0;j<m;j++){
    cout<<" "<<matriix[i][j];

  }
  cout<<endl;
 
}
 cout<<matriix.size()<<endl;
  cout<<matriix[0].size();
  
}