class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int maj;
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        for(auto it:mp){
            if(it.second>n/2){
                maj = it.first;
                break;
            }
        }
        return maj;
    }
};