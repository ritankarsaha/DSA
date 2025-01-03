class Solution {
public:
    int f(int i, int j, vector<vector<int>> &mat, vector<vector<int>> &dp) {
        if (i == 0 && j == 0)
            return mat[0][0];
        if (i < 0 || j < 0)
            return INT_MAX;
        if (dp[i][j] != -1)
            return dp[i][j];
        int up = f(i - 1, j, mat, dp);
        int left = f(i, j - 1, mat, dp);
        if (up != INT_MAX) up += mat[i][j];
        if (left != INT_MAX) left += mat[i][j];

        return dp[i][j] = min(up, left);
    }

    int minPathSum(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        vector<vector<int>> dp(m, vector<int>(n, -1));
        return f(m - 1, n - 1, grid, dp);
    }
};
