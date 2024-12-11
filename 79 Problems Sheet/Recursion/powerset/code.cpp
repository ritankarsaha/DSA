class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int subsets = 1<<(nums.size());
        vector<vector<int>> powerset(subsets);
        for(int i=0;i<subsets;i++){
            for(int j=0;j<nums.size();j++){
                if(i & (1 << j))
                powerset[i].push_back(nums[j]);
            }
        }

        return powerset;
    }
};