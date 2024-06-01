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
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int result =0; 
        for(int a:nums)
        {
            result = result ^ a;
        }
        return result;
    }
};
int main()
{
   // driver code here.
}