class Solution {
  public:
    int minimumEnergy(vector<int>& heights, int n) {
        vector<int> dp(n,0);
        dp[0] = 0;
        for(int i=1;i<n;i++){
            int fs = dp[i-1] + abs(heights[i] - heights[i-1]);
            int ss = INT_MAX;
            if(i>1)
            ss = dp[i-2] + abs(heights[i] - heights[i-2]);
            
            
            dp[i] = min(ss,fs);
        }
        
        return dp[n-1];
    }
};