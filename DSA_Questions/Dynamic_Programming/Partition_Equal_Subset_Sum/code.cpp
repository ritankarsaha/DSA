class Solution {
public:
    bool f(int ind, int target, vector<int>& arr, vector<vector<int>>& dp) {
        if (target == 0)
            return true; 
        if (ind == 0)
            return arr[0] == target; 

        if (dp[ind][target] != -1)
            return dp[ind][target];
        bool notTaken = f(ind - 1, target, arr, dp);
        bool taken = false;
        if (arr[ind] <= target)
            taken = f(ind - 1, target - arr[ind], arr, dp);

        return dp[ind][target] = notTaken || taken;
    }

    bool canPartition(vector<int>& nums) {
        int n = nums.size();
        if (n < 2)
            return false;

        int total = 0;
        for (int num : nums)
            total += num;
        if (total % 2 != 0)
            return false;

        int k = total / 2;
        vector<vector<int>> dp(n, vector<int>(k + 1, -1));
        return f(n - 1, k, nums, dp);
    }
};
