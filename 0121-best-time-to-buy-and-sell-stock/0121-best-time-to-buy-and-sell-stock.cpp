class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mini = prices[0];
        int maxi=0;
        int pf =0;
        for(int i=0;i<prices.size();i++){
            mini = min(prices[i],mini);
            pf = prices[i]-mini;
            maxi = max(pf,maxi);
        }
        return maxi;
    }
};