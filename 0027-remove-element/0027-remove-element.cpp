class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n = nums.size();int count = 0;
        for(int i=0;i<n;i++){
            if(nums[i] == val) count++;
        }
        for(int i=0;i<n;i++){
            if(nums[i] == val){
                
                for(int j=i;j<n;j++){
                    if(nums[j] != val){
                        swap(nums[i],nums[j]);
                        break;
                    }
                }
            }
        }
        for(int i=0;i<n;i++){
            cout<<nums[i]<<" ";
        }
        cout<<count;
        int ans = n-count;
        return ans;
     }
};