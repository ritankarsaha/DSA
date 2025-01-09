class Solution {
public:
    bool f(int ind, int target, vector<int> &arr, vector<vector<int>> &dp) {
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

    bool isSubsetSum(vector<int>& arr, int target) {
        int n = arr.size(); 
        vector<vector<int>> dp(n, vector<int>(target + 1, -1)); 
        return f(n - 1, target, arr, dp);
    }
};