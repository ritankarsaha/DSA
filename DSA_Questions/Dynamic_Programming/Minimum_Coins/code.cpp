class Solution {
public:

    int minElements(vector<int>& arr, int ind, int target, vector<vector<int>>& dp){
        if(ind == 0){
            if(target % arr[0] == 0)
            return target / arr[0];
            else
            return 1e9;
        }

        if(dp[ind][target] != -1)
        return dp[ind][target];

        int notTaken = 0 + minElements(arr,ind-1,target,dp);

        int Taken = 1e9;
        if(arr[ind] <= target){
            Taken = 1 + minElements(arr,ind,target-arr[ind],dp);
        }

        return dp[ind][target] = min(Taken,notTaken);
    }
    int coinChange(vector<int>& coins, int amount) {

        int n = coins.size();
        vector<vector<int>> dp(n,vector<int>(amount+1 , -1));
        int ans = minElements(coins,n-1,amount,dp);

        if(ans >= 1e9)
        return -1;

        return ans;
        
    }
};