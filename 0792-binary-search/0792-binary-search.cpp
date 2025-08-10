class Solution {
public:
    int bs(vector<int>&nums,int target,int n){
        int start = 0,end = n-1;
        
        while(start<=end){
            int mid = (start+end)/2;
            if(nums[mid] == target){
                return mid;
            }
            if(nums[mid]>target){
                end = mid-1;
            }
            if(nums[mid]<target){
                start = mid+1;
            }
        }
        return -1;
    }
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int ans = bs(nums,target,n);
        return ans;
    }
};