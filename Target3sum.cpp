#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<vector<int>> threeSum(vector<int>& nums) {
    int n = nums.size();
    vector<vector<int>> final;

    sort(nums.begin(), nums.end());

    for (int i = 0; i < n - 2; i++) {
        if (i > 0 && nums[i] == nums[i - 1]) {
            continue; // Skip duplicate elements
        }
        
        int ans = -nums[i];
        int start = i + 1, end = n - 1;

        while (start < end) {
            int sum = nums[start] + nums[end];

            if (sum == ans) {
                final.push_back({nums[i], nums[start], nums[end]});

                // Skip duplicates for start
                while (start < end && nums[start] == nums[start + 1]) start++;
                // Skip duplicates for end
                while (start < end && nums[end] == nums[end - 1]) end--;

                start++;
                end--;
            } else if (sum > ans) {
                end--;
            } else {
                start++;
            }
        }
    }
    
    return final;
}
int main()
{
  
  vector<vector<int>> response;
  vector<int>input;
  input={-1,0,1,2,-1,-4};
  response=threeSum(input);
  for(int i=0;i<response.size();i++){
    for(int j=0;j<response[0].size();j++){
      cout<<response[i][j]<<" ";
    }
    cout<<endl;
  }
  
  
}
