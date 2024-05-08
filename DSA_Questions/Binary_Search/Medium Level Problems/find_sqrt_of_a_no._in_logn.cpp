#include <bits/stdc++.h>
using namespace std;
int floorSqrt(int n)
{
    int low = 0, high = n;
    while (low <= high)
    {
        long long mid = (low + high) / 2;
        long long val = (mid * mid);
        if (val <= n)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return high;
}

/*
Problem statement
You are given a positive integer ‘n’.



Your task is to find and return its square root. If ‘n’ is not a perfect square, then return the floor value of sqrt(n).



Example:
Input: ‘n’ = 7

Output: 2

Explanation:
The square root of the number 7 lies between 2 and 3, so the floor value is 2.


Detailed explanation ( Input/output format, Notes, Images )
Sample Input 1:
6
Sample Output 1:
2
Explanation of Sample Input 1:
The square root of the given number 6 lies between 2 and 3, so the floor value is 2.
Sample Input 2:
100
Sample Output 2:
10
Explanation of Sample Output 2:
The square root of the given number 100 is 10.
Expected Time Complexity:
Try solving this in O(log(n)).
Constraints:
0 <= n <= 10 ^ 9

Time Limit: 1 sec.


*/