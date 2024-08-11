class Solution {
private:
    void dfs(int row, int col, vector<vector<int>>& vis, vector<vector<char>>& board, vector<int>& delRow, vector<int>& delCol) {
        vis[row][col] = 1;
        int n = board.size();
        int m = board[0].size();
        for (int i = 0; i < 4; i++) {
            int nRow = row + delRow[i];
            int nCol = col + delCol[i];
            if (nRow >= 0 && nRow < n && nCol >= 0 && nCol < m && board[nRow][nCol] == 'O' && !vis[nRow][nCol]) {
                dfs(nRow, nCol, vis, board, delRow, delCol);
            }
        }
    }

public:
    void solve(vector<vector<char>>& board) {
        if (board.empty() || board[0].empty()) 
        return;

        int n = board.size();
        int m = board[0].size();
        vector<vector<int>> vis(n, vector<int>(m, 0));
        vector<int> delRow = {-1, 0, 1, 0};
        vector<int> delCol = {0, 1, 0, -1};

        for (int j = 0; j < m; j++) {
            if (!vis[0][j] && board[0][j] == 'O') {
                dfs(0, j, vis, board, delRow, delCol);
            }
            if (!vis[n-1][j] && board[n-1][j] == 'O') {
                dfs(n-1, j, vis, board, delRow, delCol);
            }
        }

 
        for (int i = 0; i < n; i++) {
            if (!vis[i][0] && board[i][0] == 'O') {
                dfs(i, 0, vis, board, delRow, delCol);
            }
            if (!vis[i][m-1] && board[i][m-1] == 'O') {
                dfs(i, m-1, vis, board, delRow, delCol);
            }
        }

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (!vis[i][j] && board[i][j] == 'O') {
                    board[i][j] = 'X';
                }
            }
        }
        
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (vis[i][j] == 1) {
                    board[i][j] = 'O';
                }
            }
        }
    }
};