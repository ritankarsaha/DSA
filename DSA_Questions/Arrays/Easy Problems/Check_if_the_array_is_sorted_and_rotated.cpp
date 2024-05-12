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
    bool check(vector<int>& nums) {
        int count = 0;
        for(int i = 1; i < nums.size(); i++) {
            if(nums[i - 1] > nums[i]) {
                count++;
            }
        }
        
        if(nums[nums.size() - 1] > nums[0]) {
            count++;
        }
        return count <= 1;
    }
};

int main()
{
   //driver code here.
}