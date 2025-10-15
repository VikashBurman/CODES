class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int prefixPro = 1;
        int sufixPro = 1;
        int maxi = nums[0];
        for(int i=0;i<n;i++){
            if(prefixPro == 0) prefixPro = 1;
            if(sufixPro == 0) sufixPro = 1;
            prefixPro *= nums[i];
            sufixPro *= nums[n-i-1];
            maxi = max(maxi,max(prefixPro,sufixPro));
        }
        return maxi;
    }
};