#include<bits/stdc++.h>
using namespace std;
// function to just print yes or no.
string read(int n, vector<int> book, int target)
{
    map<int,int> mpp;
    for(int i=0;i<n;i++)
    {
        int a = book[i];
        int more = target - a;
        if(mpp.find(more)!=mpp.end())
        {
            return "YES";
        }
        mpp[a] = i;
    }
    return "NO";
}

// function to return the indices.
pair<int, int> read1(int n, vector<int> book, int target)
{
    map<int,int> mpp;
    for(int i = 0; i < n; i++)
    {
        int a = book[i];
        int more = target - a;
        if(mpp.find(more) != mpp.end())
        {
            return make_pair(mpp[more], i);
        }
        mpp[a] = i;
    }
    return make_pair(-1, -1); 
}



// function to find this out without any data structure.
string read (int n, vector<int> book, int target)
{
    int left = 0,right = n-1;
    sort(book.begin(),book.end());
    while(left<right)
    {
        int sum = book[left]+book[right];
        if(sum == target)
        return "YES";
        else if(sum>target)
        right--;
        else
        left++;
    }
    return "NO";
}
