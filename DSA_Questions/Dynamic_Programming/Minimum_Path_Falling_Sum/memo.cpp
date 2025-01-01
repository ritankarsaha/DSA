class Solution {
public:
    int f(int i, int j, vector<vector<int>> &mat, vector<vector<int>> &dp) {
        if (j < 0 || j >= mat[0].size()) 
            return 1e9;
        if (i == 0) 
            return mat[0][j]; 

     
        if (dp[i][j] != -1) 
            return dp[i][j];

        
        int up = mat[i][j] + f(i - 1, j, mat, dp);         
        int left = mat[i][j] + f(i - 1, j - 1, mat, dp);   
        int right = mat[i][j] + f(i - 1, j + 1, mat, dp);  

        return dp[i][j] = min(up, min(left, right));
    }

    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();

        vector<vector<int>> dp(n, vector<int>(m, -1)); 
        int mini = INT_MAX;

        
        for (int j = 0; j < m; j++) {
            int ans = f(n - 1, j, matrix, dp);
            mini = min(mini, ans);
        }

        return mini;
    }
};
