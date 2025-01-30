class Solution {
public:
    int count(int ind, int target, vector<int>& arr, vector<vector<int>>& dp) {
        if (ind == 0)
            return (target % arr[0] == 0) ? 1 : 0;

        if (dp[ind][target] != -1)
            return dp[ind][target];

        int notTaken = count(ind - 1, target, arr, dp);
        int taken = 0;
        if (arr[ind] <= target) {
            taken = count(ind, target - arr[ind], arr, dp);  
        }

        return dp[ind][target] = taken + notTaken;
    }

    int change(int amount, vector<int>& coins) {
        int n = coins.size();
        vector<vector<int>> dp(n, vector<int>(amount + 1, -1));
        return count(n - 1, amount, coins, dp);
    }
};
