class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int mini = INT_MAX;
        for(int num:nums){
            mini = min(mini,num);
        }
        return mini;
    }
};