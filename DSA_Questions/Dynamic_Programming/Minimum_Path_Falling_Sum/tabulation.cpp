class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        vector<vector<int>> dp = matrix;

        for(int i=1;i<n;i++){
            for(int j=0;j<m;j++){
                int up = dp[i-1][j];
                int left = (j>0) ? dp[i-1][j-1]:1e9;
                int right = (j<m-1)? dp[i-1][j+1]:1e9;

                dp[i][j] = matrix[i][j] + min(up,min(left,right));
                
            }
        }


        return *min_element(dp[n-1].begin(),dp[n-1].end());
    }
};