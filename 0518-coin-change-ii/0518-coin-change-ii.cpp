class Solution {
public:
    int solve(vector<int>coins,int amount,int ind,vector<vector<int>>& dp){
        if (amount == 0) return 1;
        if (ind >= coins.size()) return 0;
        if (dp[ind][amount] != -1) return dp[ind][amount];

        if (coins[ind] > amount) 
            return dp[ind][amount] = solve(coins, amount, ind + 1, dp);

        int take = solve(coins, amount - coins[ind], ind, dp);
        int skip = solve(coins, amount, ind + 1, dp);

        return dp[ind][amount] = take + skip;
    }
    int change(int amount, vector<int>& coins) {
        int ind = 0;
        int n = coins.size();
        vector<vector<int>>dp(n+1,vector<int>(amount+1,-1));
        return solve(coins,amount,ind,dp);
    }
};