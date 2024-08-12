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
  bool dfs(int node, vector<int> adj[], vector<int> &vis, vector<int>& pathVis){
      vis[node] = 1;
      pathVis[node] =1;
      for(auto it: adj[node]){
          if(!vis[it]){
              if (dfs(it,adj,vis,pathVis) == true)
              return true;
          }
          else if(pathVis[it] )
          return true;
          
          
      }
      pathVis[node] = 0;
      return false;
  }
  public:
    bool isCyclic(int V, vector<int> adj[]) {
        vector<int> vis(V,0);
        vector<int> pathVis(V,0);
        
        for(int i=0;i<V;i++){
            if(!vis[i]){
                if(dfs(i,adj,vis,pathVis) == true)
                return true;
            }
        }
        
        return false;
        
        
    }
};