class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int ans;
        map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        for(auto it:mp){
            if(it.second>nums.size()/2){
                ans = it.first;
            }
        }
        return ans;
    }
};