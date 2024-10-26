class Solution {
public:
    void findSet(int ind,vector<int>& nums,vector<vector<int>>&ans,       vector<int>&ds){
        //base case agr index out of bound hua to rukjanna
        if(ind>=nums.size()){
            ans.push_back(ds);
            return;
        }

        //main logic
        //elm push kro ds me
        ds.push_back(nums[ind]);
        findSet(ind+1,nums,ans,ds);
        //if not want to  pick up then
        ds.pop_back();
        //again call krdo 
        findSet(ind+1,nums,ans,ds);
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>ds;

        findSet(0,nums,ans,ds);
        return ans;
    }
};