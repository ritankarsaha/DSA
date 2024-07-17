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

int main()
{

}
class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int left = 0, right = 0, zeroes = 0, maxlen = 0;

        while (right < nums.size()) {
            if (nums[right] == 0)
                zeroes++;

            while (zeroes > k) {
                if (nums[left] == 0)
                    zeroes--;
                left++;
            }

            maxlen = max(maxlen, right - left + 1);
            right++;
        }

        return maxlen;
    }
};
