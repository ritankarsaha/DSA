

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
    private:
    bool detect(int src, vector<int> adj[], vector<int> vis){
        vis[src] = 1;
        queue<pair<int,int>> q;
        q.push({src,-1});
        while(!q.empty()){
            int node = q.front().first;
            int parent = q.front().second;
            q.pop();
            for(auto it: adj[node]){
                if(!vis[it]){
                    vis[node] = 1;
                    q.push({it,node});
                    
                    
                }
                else{
                    if(parent != it)
                    return true;
                }
            }
        }
        return false;
    }
  public:

    bool isCycle(int V, vector<int> adj[]) {
        vector<int> vis(V,0);
        for(int i=0;i<V;i++){
            if(!vis[i]){
               if(detect(i,adj,vis))
               return true;
            }
        }
        
        return false;
    }
};