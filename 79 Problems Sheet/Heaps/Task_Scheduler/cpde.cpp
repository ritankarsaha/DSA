class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        map<char,int>mp;
        for(int i=0;i<tasks.size();i++){
            mp[tasks[i]]++;
        }

        priority_queue<int> pq;
        for(auto it:mp){
            pq.push(it.second);
        }

        int result = 0;
        while(!pq.empty()){
            int time = 0;
            vector<int>tmp;
            for(int i=0;i<n+1;i++){
                if(!pq.empty()){
                    tmp.push_back(pq.top()-1);
                    pq.pop();
                    time++;
                }
            }

            for(auto it:tmp){
                if(it)
                pq.push(it);
            }

            if(pq.empty())
            result+=time;
            else
            result+=n+1;
        }

        return result;
    }
};