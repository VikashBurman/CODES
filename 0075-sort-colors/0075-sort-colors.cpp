class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int ze = 0,on = 0,tw = 0;
        for(int i=0;i<n;i++){
            if(nums[i] == 0) ze++;
            else if(nums[i] == 1) on++;
            else
            tw++;
        }
        int idx = 0;
        for(int i=0;i<ze;i++){
            nums[idx] = 0;
            idx++;
        }
        for(int j=0;j<on;j++){
            nums[idx] = 1;
            idx++;
        }
        for(int k=0;k<tw;k++){
            nums[idx] = 2;
            idx++;
        }
    }
};