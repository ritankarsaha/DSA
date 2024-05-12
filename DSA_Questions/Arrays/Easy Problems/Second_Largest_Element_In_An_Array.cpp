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


int SecondLargest(vector<int>v){
    int largest = INT_MIN,slargest=INT_MIN;
    for(int i=0;i<v.size();i++){
        if(v[i]>largest){
            slargest = largest;
            largest = v[i];
        }
        else if(v[i] > largest &&v[i]!=largest)
        {
            slargest = v[i];
        }
    }
    return slargest;
}
int main()
{
   
}