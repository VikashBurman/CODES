class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>ans;
        set<vector<int>>s;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            int j=i+1;
            int k = nums.size()-1;
            while(j<k){
                int sum=nums[j]+nums[k]+nums[i];
                if( sum == 0){
                    s.insert({nums[j],nums[k],nums[i]});
                    j++;k--;
                }else if(sum<0){
                    j++;
                }else{
                    k--;
                }
            }
        }
        for(auto it:s){
            ans.push_back(it);
        }
        return ans;
    }
};