#include <bits/stdc++.h>
using namespace std;
int lowerBound(vector<int> arr, int n, int x)
{
    int low = 0, high = n - 1, ans = n;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] >= x)
        {
            ans = mid;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return ans;
}
/*
to find the lowerbound using stl function in c++.

lb= lower_bound(arr.begin(),arr.end(),n)
this returns a pointer. to get the index we have to just subtract the beginner iterator.

*/