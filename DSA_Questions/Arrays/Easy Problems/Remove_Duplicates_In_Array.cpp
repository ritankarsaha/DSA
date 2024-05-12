#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<math.h>
#include<utility>
#include<stack>
#include<list>
#include<map>
#include<set>
using namespace std;


class BruteForceSolution{
public:

int Brute(vector<int> v){
   set < int > set;
   for(int i=0;i<v.size();i++){
     set.insert(v[i]);
   }
   return set.size();
}

};

//reduces the space complexity by modifying in the same vector itself.
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int> nums1;
        int n=nums.size();
        int j=0;
        for(int i=1;i<n;i++)
        {
          if(nums[i]!=nums[j])
          {
            nums[j+1]=nums[i];
            j++;
          }
        }
        return j+1;
    }
};



int main()
{

}