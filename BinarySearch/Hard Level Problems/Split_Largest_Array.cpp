#include <bits/stdc++.h>
using namespace std;
int count(vector<int> &arr, int maxsum)
{
    int count1 = 1;
    long long subsum = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (subsum + arr[i] <= maxsum)
        {
            subsum += arr[i];
        }
        else
        {
            count1++;
            subsum = arr[i];
        }
    }
    return count1;
}

int find(vector<int> &arr, int m)
{
    int low = *max_element(arr.begin(), arr.end());
    int high = accumulate(arr.begin(), arr.end(), 0);
    if (m > arr.size())
        return -1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        int partitions = count(arr, mid);
        if (partitions > m)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return low;
}

class Solution
{
public:
    int splitArray(vector<int> &nums, int k)
    {
        return (find(nums, k));
    }
};

/*

Given an integer array nums and an integer k, split nums into k non-empty subarrays such that the largest sum of any subarray is minimized.

Return the minimized largest sum of the split.

A subarray is a contiguous part of the array.



Example 1:

Input: nums = [7,2,5,10,8], k = 2
Output: 18
Explanation: There are four ways to split nums into two subarrays.
The best way is to split it into [7,2,5] and [10,8], where the largest sum among the two subarrays is only 18.
Example 2:

Input: nums = [1,2,3,4,5], k = 2
Output: 9
Explanation: There are four ways to split nums into two subarrays.
The best way is to split it into [1,2,3] and [4,5], where the largest sum among the two subarrays is only 9.


Constraints:

1 <= nums.length <= 1000
0 <= nums[i] <= 106
1 <= k <= min(50, nums.length)

*/