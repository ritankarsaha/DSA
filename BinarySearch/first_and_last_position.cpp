#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> searchRange(vector<int> &nums, int target)
    {
        auto lb = lower_bound(nums.begin(), nums.end(), target);
        auto ub = upper_bound(nums.begin(), nums.end(), target);
        if ((lb - nums.begin()) == nums.size() || nums[(lb - nums.begin())] != target)
            return {-1, -1};
        else
            return {(int)(lb - nums.begin()), (int)(ub - nums.begin() - 1)};
    }
};