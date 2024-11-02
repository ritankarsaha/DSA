class Solution {
    private:
    vector<int>nextSmaller(vector<int>arr){
        int n=arr.size();
        stack<int>st;
        vector<int>nse(n);
        for(int i=n-1;i>=0;i--){
            while(!st.empty()&&arr[st.top()]>arr[i])st.pop();
            if(st.empty())nse[i]=n;
            else{
                nse[i]=st.top();
            }
            st.push(i);
        }
        return nse;
    }
    vector<int>prevSmaller(vector<int>arr){
        int n=arr.size();
        stack<int>st;
        vector<int>pse(n);
        for(int i=0;i<n;i++){
            while(!st.empty()&&arr[st.top()]>=arr[i])st.pop();
            if(st.empty())pse[i]=-1;
            else{
                pse[i]=st.top();
            }
            st.push(i);
        }
        return pse;
    }
public:
    int maximalRectangle(vector<vector<char>>& mat) {
        int n=mat.size();
        int m=mat[0].size();
        vector<int>height(m,0);
        int maxi=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                height[j]=mat[i][j]=='1'?height[j]+1:0;
            }

            vector<int>nse=nextSmaller(height);
            vector<int>pse=prevSmaller(height);
            for(int i=0;i<m;i++){
            int width=nse[i]-pse[i]-1;
            maxi=max(maxi,width*height[i]);
        }

        }
        return maxi;
    }
};