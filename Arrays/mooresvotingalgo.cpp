#include<bits/stdc++.h>
using namespace std;
int majorityElement(vector<int> v) {
	map<int,int> mpp;
	for(auto it:v)
	{
		mpp[it]++;
	}
	for(auto it:mpp)
	{
		if(it.second>v.size()/2)
		{
			return it.first;
		}
	}
	return -1;
}

// using moore's voting algorithm
int majorityElement(vector<int> v) {
	int cnt =0;
	int ele;
	for(int i=0;i<v.size();i++)
	{
		if(cnt == 0)
		{
			cnt =1;
			ele = v[i];
		}
		else if(ele == v[i])
		{
          cnt++;
		}
		else
		{
			cnt --;
		}
	}
	int cnt1=0;
	for(auto it : v)
	{
		if(it == ele)
		cnt1++;
	}
	if(cnt1 > v.size()/2)
	return ele;

	return -1;
}