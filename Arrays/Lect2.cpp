/*
// rotate an array by one element
#include <bits/stdc++.h> 
vector<int> rotateArray(vector<int>& arr, int n) {
    int first = arr[0];
    for(int i=1;i<n;i++)
    {
        arr[i-1] = arr[i];
    }
    arr[n-1] = first;

    return arr;
}
*/





 // for reversing an array by k places
 // reverse (arr,arr+k)
 // reverse (arr+k,arr+n)
 // reverse(arr,arr+n)


/*
// moving zeroes to the end.
vector<int> moveZeros(int n, vector<int> a) {
    int j =-1;
    for(int i =0;i<n;i++)
    {
      if (a[i] == 0) {
        j = i;
        break;
      }
    }
    if(j==-1)
    return a;

    for(int i=j+1;i<n;i++)
    {
        if(a[i]!=0)
        {
            swap(a[j],a[i]);
            j++;
        }
    }
    return a;
}
*/


