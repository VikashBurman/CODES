class Solution {
public:
    
    int solve(vector<int>nums,int ind,vector<int>& dp){
        if(ind>=nums.size()) return 0;
        if(dp[ind] != -1 ) return dp[ind];
        int steal = nums[ind]+solve(nums,ind+2,dp);
        int skip = solve(nums,ind+1,dp);
        return dp[ind] =  max(steal,skip);
    }
    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<int>dp(n+1,-1);
        int ans = solve(nums,0,dp);
        return ans;
    }
};