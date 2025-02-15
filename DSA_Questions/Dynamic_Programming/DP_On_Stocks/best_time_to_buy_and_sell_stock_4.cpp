class Solution {
public:
    int maxProfit(int k, vector<int>& prices) {
        

        int n = prices.size();

        vector<vector<int>> ahead(2, vector<int>(k+1,0));
        vector<vector<int>> curr(2,vector<int> (k+1,0));

        for(int ind = n-1;ind>=0;ind--){
            for(int buy=0;buy<=1;buy++){
                for(int cap=1;cap<=k;cap++){

                    if(buy == 0){
                        curr[buy][cap] = max(-prices[ind]+ahead[1][cap], 0+ahead[0][cap]);
                    }

                    if(buy == 1){
                        curr[buy][cap] = max(prices[ind] + ahead[0][cap-1], 0+ahead[1][cap]);
                    }
                }
            }


            ahead = curr;
        }

        return ahead[0][k];
    }
};