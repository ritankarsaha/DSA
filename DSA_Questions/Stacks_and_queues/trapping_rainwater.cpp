class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        int left = 0, right = n-1, res = 0;
        int maxL = 0, maxR = 0;
        while(left<=right){
            if(height[left] <= height[right]){
                if(height[left] >= maxL){
                    maxL = height[left];
                }
                else{
                    res += maxL - height[left];
                }
                left++;
            }
            else{
                if(height[right] >= maxR){
                    maxR = height[right];
                }
                else{
                    res += maxR - height[right];
                }
                right--;
            }
        }
        return res;
    }
};