
#include <bits/stdc++.h>
using namespace std;

int findceil(std::vector<int> &arr, int n, int x)
{
    int low = 0, high = n - 1, ans = -1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] >= x)
        {
            ans = arr[mid];
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return ans;
}

int findfloor(std::vector<int> &arr, int n, int x)
{
    int low = 0, high = n - 1, ans = -1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] <= x)
        {
            ans = arr[mid];
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return ans;
}

std::pair<int, int> getFloorAndCeil(std::vector<int> &a, int n, int x)
{
    int ceil = findceil(a, n, x);
    int floor = findfloor(a, n, x);
    return std::make_pair(floor, ceil);
}
