class Solution {
  public:
    // Function to get the maximum total value in the knapsack.
    bool static comp(Item a, Item b){
        double r1 = (double)a.value/(double)a.weight;
        double r2 = (double)b.value/(double)b.weight;
        return r1>r2;
    }
    double fractionalKnapsack(int w, Item arr[], int n) {
        // Your code here
        sort(arr,arr+n,comp);
        int curr=0;
        double final = 0.0;
        for(int i=0;i<n;i++){
            if(curr+arr[i].weight <= w){
                curr+=arr[i].weight;
                final+=arr[i].value;
            }
            else{
                int remain = w-curr;
                final+=(arr[i].value/(double)arr[i].weight)*(double)remain;
                break;
            }
        }
        return final;
        
    }
};
