class Solution {

    void subsetSum(int index, int sum, int size, vector<vector<int>> &arr, vector<int> &nums){
        if(index <0){
            arr[size].push_back(sum);
            return;
        }

        subsetSum(index-1,sum + nums[index], size+1, arr, nums);
        subsetSum(index-1,sum,size,arr,nums);
    }
public:
    int minimumDifference(vector<int>& nums) {

        int n = nums.size();
        int sum = 0;
        sum = accumulate(nums.begin(),nums.end(),0);

        vector<int> left,right;


        for(int i=0;i<n/2;i++){
            left.push_back(nums[i]);
            right.push_back(nums[i+(n/2)]);
        }

        vector<vector<int>> left_sum(n/2+1) , right_sum(n/2+1);

        subsetSum(n/2-1,0,0,left_sum,left);
        subsetSum(n/2-1,0,0,right_sum,right);


        for(int i=0;i<n/2;i++){
            sort(right_sum[i].begin(), right_sum[i].end());
        }

        int res = abs(right_sum[n/2][0] - left_sum[n/2][0]);

        for(int subsetSize = 1; subsetSize < n/2; subsetSize++){
            
            for(auto &a: left_sum[subsetSize]){
                int target = sum/2 -a;

                int rightIndex = n/2 - subsetSize;

                auto &v = right_sum[rightIndex];

                auto itr = lower_bound(v.begin(),v.end(),target);

                if(itr != v.end()){
                    int leftSum = a + *itr;
                    int rightSum = sum - leftSum;
                    res = min(res,abs(rightSum-leftSum));
                }
            }
        }


        return res;




        
    }
};