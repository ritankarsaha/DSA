#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<math.h>
#include<utility>
#include<stack>
#include<list>
#include<map>
using namespace std;


int SecondSmallest(vector<int>v){
    int smallest = INT_MAX,ssmallest=INT_MAX;
    for(int i=0;i<v.size();i++){
        if(v[i]<smallest){
            ssmallest = smallest;
            smallest = v[i];
        }
        else if(v[i] < ssmallest &&v[i]!=smallest)
        {
            ssmallest = v[i];
        }
    }
    return ssmallest;
}
int main()
{
   
}