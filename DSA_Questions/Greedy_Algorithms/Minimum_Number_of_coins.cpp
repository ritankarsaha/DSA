class Solution{
public:
    vector<int> minPartition(int N)
    {
        vector<int> deno = {1,2,5,10,20,50,100,200,500,2000};
        vector<int> ans;
        for(int i = deno.size()-1; i>=0; i-- ){
            while(N >= deno[i]){
                N -=deno[i];
                ans.push_back(deno[i]);
            }
        }
        
        return ans;
    }
};