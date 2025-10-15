class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        
        int maxpro = nums[0];
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                int pro = 1;
                for(int k=i;k<=j;k++){
                    pro = pro * nums[k];
                }
                maxpro = max(maxpro,pro);
            }
        }
        return maxpro;
    }
};