#include<bits/stdc++.h>
using namespace std;
// best time to buy and sell stocks.
 long maxSubarraySum(vector<int> arr, int n)
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

//rearranage array elements by sign.
vector<int> alternateNumbers(vector<int>&a) {
    vector<int>neg;
    vector<int>pos;
    for(auto it: a)
    {
        if(it<0)
        neg.push_back(it);
        else
        pos.push_back(it);
    }
    if(pos.size()>neg.size())
    {
        for(int i=0;i<neg.size();i++)
        {
            a[2*i] = pos[i];
            a[(2*i)+1] = neg[i];
        }
        int index = neg.size()*2;
        for(int i=neg.size();i<pos.size();i++)
        {
            a[index] = pos[i];
            index++;
        }
    }
    else
    {
        for(int i=0;i<pos.size();i++)
        {
            a[2*i] = pos[i];
            a[(2*i)+1] = neg[i];
        }
        int index = pos.size()*2;
        for(int i=pos.size();i<neg.size();i++)
        {
            a[index] = neg[i];
            index++;
        }
    }
return a;
    
    
}

// largest leaders in an array
vector<int> superiorElements(vector<int>&a) {
      int maxi = INT_MIN;
      vector<int> ans;
      int n=a.size();
      for(auto i=n-1;i>=0;i--)
      {
        if(a[i]>maxi)
        {
            ans.push_back(a[i]);
            maxi=max(maxi,a[i]);
        }
      }
      sort(ans.begin(),ans.end());
      return ans;
}


//longest consecutive sequence

int longestSuccessiveElements(vector<int>& a) {
    if (a.empty())
        return 0;
    
    sort(a.begin(), a.end());
    int cnt = 1, largest = 1;
    
    for (int i = 1; i < a.size(); i++) 
    {
        if (a[i] == a[i - 1] + 1) 
        {
            cnt++;
            largest = max(largest, cnt);
        } 
        else if (a[i] != a[i - 1]) 
        {
            cnt = 1;
        }
    }
    
    return largest;
}


// set matrix zeroes.
#include <bits/stdc++.h> 
vector<vector<int>> zeroMatrix(vector<vector<int>> &matrix, int n, int m) {
	int col[m] = {0};
	int row[n] = {0};
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(matrix[i][j] ==0)
			{
				col[j] = 1;
				row[i] = 1;
			}
		}
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
                        if (row[i] ==1  || col[j] == 1) {
                                matrix[i][j] = 0;
                        }
                }
        }
        return matrix;
}


// rotate matrix by 90 degrees.
#include<vector>

void rotateMatrix(vector<vector<int>> &mat){
	for(int i=0;i<mat.size()-1;i++)
	{
		for(int j=i+1;j<mat.size();j++)
		{
			swap(mat[i][j], mat[j][i]);
		}
	}
	for(int i=0;i<mat.size();i++)
	{
		reverse(mat[i].begin(),mat[i].end());
	}
}