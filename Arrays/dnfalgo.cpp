#include<bits/stdc++.h>
using namespace std;
#include <bits/stdc++.h> 

// printing an array of 0s 1s and 2s in a sorted order.
void sortArray(vector<int>& arr, int n)
{
    int count0 = 0, count1 =0,count2 =0;
    vector<int> sortedarray;
    for(auto it :arr)
    {
        if(it == 0)
        count0++;
        else if(it == 1)
        count1++;
        else
        count2++;
    }
    for(int i=0;i<count0;i++)
    {
        sortedarray.push_back(0);
    }
    for(int i=0;i<count1;i++)
    {
        sortedarray.push_back(1);
    }

for(int i=0;i<count2;i++)
    {
        sortedarray.push_back(2);
    }

    for(auto it1:sortedarray)
    {
        cout << it1 << " ";
    }


}


// Dutch National Flag Algorithm
#include <bits/stdc++.h> 
void sortArray(vector<int>& arr, int n)
{
    int low=0,mid=0,high=n-1;
    while(mid<=high)
    {
        if(arr[mid] == 0)
        {
            swap(arr[low],arr[mid]);
            low++;
            mid++;
        }
        else if(arr[mid] ==1)
        {
            mid++;
        } else {
            swap(arr[mid], arr[high]);
            high--;
        }
    }
}
