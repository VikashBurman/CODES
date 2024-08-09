class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        // next_permutation(nums.begin(),nums.end());
        int n = nums.size();
        int goal_index = -1;
        //find choosen number to swap
        for(int i=n-1;i>0;i--){
            if(nums[i-1]<nums[i]){
                goal_index = i-1;
                break;
            }
        }
        int swap_ind = goal_index;
        if(goal_index != -1){
            
            //right side me just  greater element
            for(int i=n-1;i>=goal_index+1;i--){
                if(nums[goal_index]<nums[i]){
                swap_ind = i;
                break;
                }
            }
             //swap both the element
        swap(nums[goal_index],nums[swap_ind]);
        }
       
        //reverse the element after goal index;
        reverse(nums.begin()+goal_index+1,nums.end());
    }
};