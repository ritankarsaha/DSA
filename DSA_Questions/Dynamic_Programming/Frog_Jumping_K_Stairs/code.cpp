class Solution {
  public:
    int minimizeCost(int k, vector<int>& arr) {
        vector<int> dp(arr.size(),INT_MAX);
        dp[0] = 0;
        
        for(int i=1;i<arr.size();i++){
            for(int j=1;j<=k && (i-j)>=0; j++){
                dp[i] = min(dp[i], dp[i-j] + abs(arr[i] - arr[i-j]));
            }
        }
        
        return dp[arr.size()-1];
        
    }
};