class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n = cardPoints.size();
        int total = accumulate(cardPoints.end()-k,cardPoints.end(),0);
        int maxi = total;

        for(int i=0;i<k;i++){
            total += cardPoints[i] - cardPoints[n-k+i];
            maxi = max(maxi,total);
        }

        return maxi;
    }
};