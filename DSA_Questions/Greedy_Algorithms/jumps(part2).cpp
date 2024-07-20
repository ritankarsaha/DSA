#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

class Solution {
public:
    int jump(vector<int>& nums) {
        int jumps = 0, l = 0, r = 0;
        while (r < nums.size() - 1) {
            int maxi = 0;
            for (int i = l; i <= r; ++i) {
                if (i + nums[i] > maxi) {
                    maxi = i + nums[i];
                }
            }
            l = r + 1;
            r = maxi;
            jumps++;
        }
        return jumps;
    }
};
