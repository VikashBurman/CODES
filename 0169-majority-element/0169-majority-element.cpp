class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int ans = nums[0];
        for(int i=0;i<n;i++){
            int count = 1;
            int elm = nums[i];
            for(int j=i+1;j<n;j++){
                if(nums[j] == elm){
                    count++;
                }
            }
            if(count>n/2){
                ans = elm;
                break;
            }
        }
        return ans;
    }
};