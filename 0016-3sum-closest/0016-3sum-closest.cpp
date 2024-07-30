class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int ans;
        int mini = INT_MAX;
        for(int i=0;i<nums.size();i++){
            int j=i+1;int k=n-1;
            while(j<k){
               int sum = nums[i]+nums[j]+nums[k];
                if(sum == target){
                  return sum;
                }else if(sum<target){
                    j++;
                }else{
                    k--;
                }
                int diff = abs(sum-target);
                if(diff<mini){
                    ans = sum;
                    mini = diff;
                }
            }
        }
        return ans;
    }
};