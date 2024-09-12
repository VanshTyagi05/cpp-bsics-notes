#include <iostream>
#include<vector>
using namespace std;

int main()
{

  // for undirected-unweighted graph
  // int vertex,edges;
  // cout<<"enetr the number of vertex and edges";
  // cin>>vertex>>edges;
  // vector<vector<bool>>adj(vertex,vector<bool>(vertex,0));
  // int u,v;
  // for(int i=0;i<edges;i++){
  //   cout<<"enter the initial and final edge point";
  //   cin>>u>>v;
  //   adj[u][v]=1;
  //   adj[v][u]=1;





  // }

  // for undirected weighted graph
  int vertex,edges;
  cout<<"enetr the number of vertex and edges";
  cin>>vertex>>edges;
  vector<vector<int>>adj(vertex,vector<int>(vertex,0));
  int u,v,val;
  for(int i=0;i<edges;i++){
    cout<<"enter the initial and final edge point";
    cin>>u>>v;
    cout<<"enter the edge length:";
    cin>>val;
      

    adj[u][v]=val;
    adj[v][u]=val;





  }

  for(int i=0;i<adj.size();i++){
    for(int j=0;j<adj[i].size();j++){
      cout<<adj[i][j]<<" ";
    }
    cout<<endl;
  }
  
 
  return 0;
}
