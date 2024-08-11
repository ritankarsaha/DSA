class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();
        vector<vector<int>>dist(m,vector<int>(n,INT_MAX));
        queue<pair<int,int>>q;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(mat[i][j] == 0){
                    q.push({i,j});
                    dist[i][j] = 0;
                }
            }
        }
        vector<int>delRow = {-1,0,1,0};
        vector<int>delCol = {0,1,0,-1};
        while(!q.empty()){
            int row = q.front().first;
            int col = q.front().second;
            int steps = dist[row][col];
            q.pop();
            for(int i=0;i<4;i++){
                int nRow = row+delRow[i];
            int nCol = col+delCol[i];
            if(nRow>=0 && nRow<m && nCol>=0 && nCol<n && dist[nRow][nCol] == INT_MAX){
                dist[nRow][nCol] = steps+1;
                q.push({nRow,nCol});
            }
                
            }
            
        }

        return dist;


    }
};

//done without visiting the 0th element.