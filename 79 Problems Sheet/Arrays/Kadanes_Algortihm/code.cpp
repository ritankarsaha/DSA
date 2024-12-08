class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxs = INT_MIN,currs = 0;
        for(int i=0;i<nums.size();i++){
            currs = currs+nums[i];
            if(currs > maxs)
            maxs = currs;
            if(currs < 0)
            currs = 0;
        }
        return maxs;
    }
};