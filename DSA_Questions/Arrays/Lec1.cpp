// when an array is defined gloabally all of its empty elements are assigned with zero.

/*
// largest element in an array.
#include <bits/stdc++.h> 
int largestElement(vector<int> &arr, int n) {
    int l = arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]>l)
        l = arr[i];
    }
    return l;
}
*/

/*
//second largest and second samllest

int secondlargest(vector<int>&a , int n){
    int largest = a[0];
    int slargest = INT_MIN;
   for(int i=0;i<n;i++)
   {
      if(a[i]>largest)
      {
          slargest = largest;
          largest = a[i];
      }
      else if(a[i]<largest && a[i]>slargest)
      {
          slargest = a[i];
      }
   }
   return slargest;
}
int secondsmallest(vector<int>&a , int n){
    int smallest = a[0];
    int ssmallest = INT_MAX;
   for(int i=0;i<n;i++)
   {
      if(a[i]<smallest)
      {
          ssmallest = smallest;
          smallest = a[i];
      }
      else if(a[i]>smallest && a[i]<ssmallest)
      {
          ssmallest = a[i];
      }
   }
   return ssmallest;
}

vector<int> getSecondOrderElements(int n, vector<int> a) 
{
    int slargest = secondlargest(a,n);
    int ssmallest = secondsmallest(a,n);
    return{slargest,ssmallest};
}
*/

/*
//check if an array is sorted.
int isSorted(int n, vector<int> a) 
{
    for(int i=0;i<n;i++)
    {
        if(a[i] >= a[i-1])
        {
             
        }
        else{
            return false;
        }
    }
    return true;
}
*/
/* // check if the array is sorted and rotated.
class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        int count=0;
        for(int i=1;i<n;i++){
            if(nums[i-1]>nums[i])
            {
              count++;
            }
        }
            if(nums[n-1]>nums[0])
            {
                count++;
            }
        
        return (count<=1);
    }
};
*/

/*
// remove duplicates from an array.
int removeDuplicates(vector<int> &arr, int n) {
	int i =0;
	for(int j=1;j<n;j++)
	{
		if(arr[j] != arr[i])
		{
			arr[i+1] =arr[j];
			i++;
		}
	}
	return (i+1);
}

*/
