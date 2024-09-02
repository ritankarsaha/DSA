class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        vector<pair<int,int>> adj[n+1];
        for(auto it: times){
            adj[it[0]].push_back({it[1], it[2]});
        }

        vector<int> dis(n+1, 1e9);  
        dis[k] = 0;
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
        pq.push({0, k});
        while(!pq.empty()){
            auto it = pq.top();
            pq.pop();
            int dist = it.first;
            int node = it.second;
            for(auto it: adj[node]){
                int adjNode = it.first;
                int wt = it.second;

                if(dis[adjNode] > wt + dist){
                    dis[adjNode] = wt + dist;
                    pq.push({dist + wt, adjNode});
                }
            }
        }

        int ans = 0;
        for(int i = 1; i <= n; i++){  
            ans = max(ans, dis[i]);
        }
        if (ans == 1e9)
            return -1;

        return ans;
    }
};