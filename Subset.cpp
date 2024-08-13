#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
  vector<int>nums={1,2,2};

int n=nums.size();
        vector<vector<int>> ans;
       
        ans.push_back(vector<int>());
       for(int i=0;i<n;i++){
        
         for(int j=i;j<n;j++){
           vector<int>temp;
            //we will need a third loop to insert elements into the temp amd then in the ans
            for(int k=i;k<=j;k++){
                 
                // cout<<nums[k]<<"";
                 temp.push_back(nums[k]);
            }
            ans.push_back(temp);
            
         }
       
       }
    
 for(int i=0;i<ans.size();i++){
  for(int j=0;j<ans[i].size();i++){
    cout<<ans[i][j]<<" ";
  }
  cout<<endl;
 }
  
  return 0;
}
