class Solution {
public:
    int f(int i, int j, vector<vector<int>> &grid, vector<vector<int>> &dp){
        int m = grid.size();
        int n = grid[0].size();

        if(i == m-1)
        return grid[i][j];
        if(dp[i][j] != -1)
        return dp[i][j];

        int t = INT_MAX;
        for(int k=0;k<n;k++){
            if(k!=j)
            t = min(t, grid[i][j] + f(i+1,k,grid,dp));
        }

        return dp[i][j] = t;
    }
    int minFallingPathSum(vector<vector<int>>& grid) {

        int m = grid.size();
        int n = grid[0].size();

        int mini = INT_MAX;
        vector<vector<int>> dp(m,vector<int>(n,-1));

        for(int i=0;i<m;i++)
        {
            mini = min(mini, f(0,i,grid,dp));
        }
        
        return mini;
    }

};