class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int sum;int count=0;
        for(int i=0;i<nums.size();i++){
            sum=0;
            for(int j=i;j<nums.size();j++){
                sum += nums[j];
                 if(sum == k) count++;
            }
           
        }
        return count;
    }
};