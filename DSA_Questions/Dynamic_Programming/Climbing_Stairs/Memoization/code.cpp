class Solution {
public:

    int preClimbStairs(int n, vector<int> &dp){
        if(n <=1)
        return dp[n] =1 ;
        if(dp[n] != -1)
        return dp[n];
        int left = preClimbStairs(n-1,dp);
        int right = preClimbStairs(n-2,dp);
        return dp[n] = left + right;
    
    }
    int climbStairs(int n) {
        vector<int> dp(n+1,-1);
        return preClimbStairs(n,dp);
        
    }
};