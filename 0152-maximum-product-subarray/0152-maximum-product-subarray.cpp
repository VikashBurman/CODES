class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int pro;
        int maxi = INT_MIN;

        for(int i=0;i<n;i++){
            pro = 1;
            for(int j=i;j<n;j++){
                pro *= nums[j];
                maxi = max(pro,maxi);
            }
        }
        return maxi;
    }
};