#include <vector>
#include <queue>
using namespace std;

class Solution {
private:
    void bfs(int row, int col, vector<vector<int>>& vis, vector<vector<char>>& grid) {
        vis[row][col] = 1;
        queue<pair<int, int>> q;
        q.push({row, col});
        int n = grid.size();
        int m = grid[0].size();
        while (!q.empty()) {
            int x = q.front().first;
            int y = q.front().second;
            q.pop();
            
            for (int i = -1; i <= 1; ++i) { 
                for(int j = -1;j<=1;j++){
                    int nRow = x + i;
                int nCol = y + j;
                
                if (nRow >= 0 && nRow < n && nCol >= 0 && nCol < m &&
                    grid[nRow][nCol] == '1' && !vis[nRow][nCol]) {
                    vis[nRow][nCol] = 1; 
                    q.push({nRow, nCol});
                }
                    
                }
                
            }
        }
    }

public:

    int numIslands(vector<vector<char>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> vis(n, vector<int>(m, 0));
        int cnt = 0;

        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                if (!vis[i][j] && grid[i][j] == '1') {
                    cnt++;
                    bfs(i, j, vis, grid);
                }
            }
        }

        return cnt;
    }
};