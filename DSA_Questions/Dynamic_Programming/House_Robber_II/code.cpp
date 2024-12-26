class Solution {
public:

    int fn(vector<int> &nums, int ind, vector<int> &dp){
        if(ind == 0)
        return nums[0];
        if(ind < 0)
        return 0;
        if(dp[ind] != -1)
        return dp[ind];
        int take = nums[ind] + fn(nums,ind-2,dp);
        int notake = 0 + fn(nums,ind-1,dp);
        return dp[ind] = max(take,notake);
    }
    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp(n,-1);
        vector<int> temp1,temp2;
        if(n == 1)
        return nums[0];
        for(int i=0;i<n;i++){
            if(i!=0)
            temp2.push_back(nums[i]);
            if(i!=n-1)
            temp1.push_back(nums[i]);
        }
    int a = fn(temp1,n-2,dp);
    fill(dp.begin(),dp.end(),-1);
    int b = fn(temp2,n-2,dp);
    return max(a,b);
        
    }


    
};