class Solution
{
public:
    int largest(vector<int> &arr, int n)
    {
        int maxi = INT_MIN;
        for(auto it:arr){
            if(it>maxi){
                maxi = max(maxi,it);
            }
        }
        
        return maxi;
    }
};