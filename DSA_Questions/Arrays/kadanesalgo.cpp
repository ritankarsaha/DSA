#include<bits/stdc++.h>
using namespace std;
long long maxSubarraySum(vector<int> arr, int n)
{
    long long sum =0, maxi=LONG_MIN;
    for(long long i=0;i<n;i++)
    {
        sum+=arr[i];

        if(sum > maxi)
        {
            maxi = max(maxi,sum);
        }
        if(sum < 0)
        {
            sum = 0;
        }
    }
    if(maxi > 0)
    return maxi;
    else
    return 0;
}
void maxSubarray(vector<int> arr, int n)
{
    long long start =0,ansstart=0,ansend=0;
    long long sum =0, maxi=LONG_MIN;
    for(long long i=0;i<n;i++)
    {
        if(sum == 0)
        {
            start = i;
        }
        sum+=arr[i];

        if(sum > maxi)
        {
            maxi = max(maxi,sum);
            ansstart = start;
            ansend = i;
        }
        if(sum < 0)
        {
            sum = 0;
        }
    }
    for(int i=ansstart;i<=ansend;i++)
    {
        cout <<  arr[i] << " ";
    }
}

int main()
{
    vector<int> arr;
    int n = 8;
    int num =0 ;
    for(int i=0;i<n;i++)
    {
        cin >> num;
        arr.push_back(num);
    }
    maxSubarray(arr,n);
}