#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<math.h>
#include<utility>
#include<stack>
#include<list>
#include<map>
#include<queue>
using namespace std;

int main()
{

}

class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        queue<pair<pair<int, int>, int>> q; 
        vector<vector<int>> vis(n, vector<int>(m, 0)); 

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == 2) {
                    q.push({{i, j}, 0});
                    vis[i][j] = 2;
                }
            }
        }

        int tm = 0; 
        vector<int> drow = {-1, 0, 1, 0}; 
        vector<int> dcol = {0, 1, 0, -1}; 

        while (!q.empty()) {
            auto [current, t] = q.front(); 
            q.pop();
            int r = current.first;
            int c = current.second;
            tm = max(tm, t); 

        
            for (int i = 0; i < 4; i++) {
                int nrow = r + drow[i];
                int ncol = c + dcol[i];
                if (nrow >= 0 && nrow < n && ncol >= 0 && ncol < m && vis[nrow][ncol] != 2 && grid[nrow][ncol] == 1) {
                    q.push({{nrow, ncol}, t + 1});
                    vis[nrow][ncol] = 2; 
                }
            }
        }

     
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == 1 && vis[i][j] != 2) {
                    return -1; 
                }
            }
        }

        return tm; 
    }
};