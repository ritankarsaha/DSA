#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int searchInsert(vector<int> &nums, int target)
    {
        int low = 0, high = nums.size() - 1, ans = 0;
        if (target > nums.back())
        {
            ans = nums.size();
            return ans;
        }
        while (low <= high)
        {
            int mid = (low + high) / 2;
            if (nums[mid] > target)
            {
                high = mid - 1;
            }
            else if (nums[mid] < target)
            {
                low = mid + 1;
            }
            else
            {
                ans = mid;
                return ans;
            }
        }
        return low;
    }
};