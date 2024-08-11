
#include <vector>
#include <queue>
#include <climits> 
using namespace std;

class Solution {
public: 
  
    vector<vector<int>> nearest(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        
        vector<vector<int>> vis(n, vector<int>(m, 0));
        vector<vector<int>> dist(n, vector<int>(m, INT_MAX));
        queue<pair<pair<int, int>, int>> q;

        
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == 1) {
                    q.push({{i, j}, 0});
                    vis[i][j] = 1;
                    dist[i][j] = 0;
                } else {
                    vis[i][j] = 0;
                }
            }
        }

  
        int delRow[] = {-1, 0, 1, 0};
        int delCol[] = {0, 1, 0, -1};
        

        while (!q.empty()) {
            int row = q.front().first.first;
            int col = q.front().first.second;
            int steps = q.front().second;
            q.pop();
            
            for (int i = 0; i < 4; i++) {
                int nrow = row + delRow[i];
                int ncol = col + delCol[i];
                
                if (nrow >= 0 && nrow < n && ncol >= 0 && ncol < m && dist[nrow][ncol] == INT_MAX) {
                    dist[nrow][ncol] = steps + 1;
                    q.push({{nrow, ncol}, steps + 1});
                }
            }
        }
        
        return dist;
    }
};