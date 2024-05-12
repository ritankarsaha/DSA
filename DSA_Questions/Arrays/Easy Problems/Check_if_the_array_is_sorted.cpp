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

bool isSorted(vector<int> arr){
    for(int i=0;i<arr.size();i++){
        if(arr[i] < arr[i-1])
        return false;
    }
    return true;
}
int main()
{
   //driver code.
}