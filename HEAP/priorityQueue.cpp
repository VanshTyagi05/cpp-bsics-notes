#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
  // priority_queue<int>p;
  // p.push(30);
  //  p.push(20);
  //   p.push(40);
  //    p.push(39);
  //     p.push(7);

  //     cout<<p.top()<<endl;
  //     p.pop();
  //     cout<<p.top()<<endl;



  // while(!p.empty()){
  //   cout<<p.top()<<endl;
  //   p.pop();
  // }

  priority_queue<int,vector<int>,greater<int> >p;

  p.push(30);
   p.push(20);
    p.push(40);
     p.push(39);
      p.push(7);
      while(!p.empty()){
    cout<<p.top()<<endl;
    p.pop();
  }
  return 0;
}
