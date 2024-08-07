#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<math.h>
#include<utility>
#include<stack>
#include<list>
#include<map>
using namespace std;

int main()
{

}

class Solution {

    private:
    void dfs(int row, int col, vector<vector<int>>&ans, vector<vector<int>>& image, int newColor, vector<int> delrow, vector<int> delcol, int iniColor){
        ans[row][col] = newColor;
        int n = image.size();
        int m = image[0].size();
        for(int i=0;i<4;i++){
            int nrow = row + delrow[i];
            int ncol = col + delcol[i];

            if(nrow>=0 && nrow<n && ncol >=0 && ncol<m && image[nrow][ncol]== iniColor && ans[nrow][ncol] != newColor){
                dfs(nrow,ncol,ans,image,newColor,delrow,delcol,iniColor);
            }
        }
    }
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        
        int iniColor = image[sr][sc];
        vector<vector<int>> ans = image;
        vector <int> delrow = {-1,0,1,0};
        vector <int> delcol = {0,1,0,-1};
        dfs(sr,sc,ans,image,color,delrow,delcol,iniColor);
        return ans;

    }
};