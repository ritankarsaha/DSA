#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<math.h>
#include<utility>
#include<stack>
#include<list>
#include<map>
using namespace std;
class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int subsets = 1<<(nums.size());
        vector<vector<int>> powerset(subsets);
        for(int i=0;i<subsets;i++)
        {
           for(int j=0;j<nums.size();j++)
           {
            if(i & (1<<j))
            powerset[i].push_back(nums[j]);
           }
        }

        return powerset;
    }
};
int main()
{
  //driver code over here.
}