
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

    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        vector<int> vis(V,0);
        vis[0] = 1;
        queue<int> q;
        q.push(0);
        vector<int> bfs;
        while(!q.empty()){
            int node = q.front();
            q.pop();
            bfs.push_back(node);
            
            for( auto it : adj[node]){
                if(!vis[it]){
                    vis[it] = 1;
                    q.push(it);
                }
            }
        }
        
        return bfs;
        
    }
};