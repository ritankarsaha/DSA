
class Solution {
public:
    int f (int i, int j, vector<vector<int>> &mat, vector<vector<int>> &dp){
        if(i == mat.size()-1)
        return mat[i][j];

        if(dp[i][j] != -1)
        return dp[i][j];

        int down = mat[i][j] + f(i+1,j,mat,dp);
        int side = mat[i][j] + f(i+1,j+1,mat,dp);

        return dp[i][j] = min(down,side);
    }
    int minimumTotal(vector<vector<int>>& triangle) {
        int n = triangle.size();
        vector<vector<int>> dp(n,vector<int>(n,-1));
        return f(0,0,triangle,dp);
        
    }
};