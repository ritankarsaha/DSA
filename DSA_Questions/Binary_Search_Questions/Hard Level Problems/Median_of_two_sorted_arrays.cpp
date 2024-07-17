#include <bits/stdc++.h>
using namespace std;

// algorithm to store two arrays in 1 array in a sorted order.
double median_brute_force_algorithm(vector<int> &array1, vector<int> &array2)
{
    int n1 = array1.size(), n2 = array2.size();
    vector<int> array3;
    int i = 0, j = 0;
    while (i <= n1 && j <= n2)
    {
        if (array1[i] < array2[j])
        {
            array3.push_back(array1[i]++);
        }
        else
        {
            array3.push_back(array2[j++]);
        }
    }
    while (i <= n1)
        array3.push_back(array1[i++]);
    while (j <= n2)
        array3.push_back(array2[j++]);

    // finding the actual median of the array.
    int n = (n1 + n2);
    if (n % 2 != 0)
    {
        return array3[n / 2];
    }
    else
    {
        return (double)((((double)array3[n / 2]) + ((double)array3[n / 2 - 1])) / 2.0);
    }
}

double median_optimal_algorithm(vector<int> &a1, vector<int> &a2)
{
    int n1 = a1.size(), n2 = a2.size();
    int i = 0, j = 0, n = (n1 + n2);
    int index2 = n / 2, index1 = index2 - 1, count = 0, index1ele = -1, index2ele = -1;
    while (i < n1 && j < n2)
    {
        if (a1[i] < a2[j])
        {
            if (count == index1)
                index1ele = a1[i];
            if (count == index2)
                index2ele = a1[i];
        }
        else
        {
            if (count == index1)
                index1ele = a2[j];
            if (count == index2)
                index2ele = a2[j];
        }
    }
    while (i < n1)
    {
        if (count == index1)
            index1ele = a1[i];
        if (count == index2)
            index2ele = a1[i];
    }
    while (j < n2)
    {
        if (count == index1)
            index1ele = a2[j];
        if (count == index2)
            index2ele = a2[j];
    }

    if (n % 2 != 0)
        return index2ele;
    else
        return (double)((double)(index1ele + index2ele) / 2);
}

// best approach
class Solution
{
public:
    double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
    {
        int n1 = nums1.size();
        int n2 = nums2.size();
        if (n1 > n2)
            return findMedianSortedArrays(nums2, nums1);
        int low = 0, high = n1;
        int left = (n1 + n2 + 1) / 2;
        int n = n1 + n2;
        while (low <= high)
        {
            int mid1 = (low + high) >> 1;
            int mid2 = left - mid1;
            int l1 = INT_MIN, l2 = INT_MIN;
            int r1 = INT_MAX, r2 = INT_MAX;
            if (mid1 < n1)
                r1 = nums1[mid1];
            if (mid2 < n2)
                r2 = nums2[mid2];
            if (mid1 - 1 >= 0)
                l1 = nums1[mid1 - 1];
            if (mid2 - 1 >= 0)
                l2 = nums2[mid2 - 1];
            if (l1 <= r2 && l2 <= r1)
            {
                if (n % 2 != 0)
                    return max(l1, l2);
                else
                    return (double)((max(l1, l2) + min(r1, r2)) / 2.0);
            }
            else if (l1 > r2)
                high = mid1 - 1;
            else
                low = mid1 + 1;
        }
        return 0;
    }
};

/*
Given two sorted arrays nums1 and nums2 of size m and n respectively, return the median of the two sorted arrays.

The overall run time complexity should be O(log (m+n)).



Example 1:

Input: nums1 = [1,3], nums2 = [2]
Output: 2.00000
Explanation: merged array = [1,2,3] and median is 2.
Example 2:

Input: nums1 = [1,2], nums2 = [3,4]
Output: 2.50000
Explanation: merged array = [1,2,3,4] and median is (2 + 3) / 2 = 2.5.


Constraints:

nums1.length == m
nums2.length == n
0 <= m <= 1000
0 <= n <= 1000
1 <= m + n <= 2000
-106 <= nums1[i], nums2[i] <= 106

*/