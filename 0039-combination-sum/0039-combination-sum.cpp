class Solution {
public:

void findSum(int ind,vector<int>& candidates,vector<vector<int>>& ans,vector<int>&ds,int target){
    //base case 

    if(ind>=candidates.size()){ //sare traverse kr liye
    //target 0 ban chuka hai
        if(target == 0){
            ans.push_back(ds);
        }
        return;
    }
    //agr target chota h abhi current element se then
    if(candidates[ind]<=target){
        //pick kr rhe h
        ds.push_back(candidates[ind]);
        findSum(ind,candidates,ans,ds,target-candidates[ind]);
    //jab vapis ayenge or elem ko choose krke valid sum nhi mila recursion se
        ds.pop_back();
    }
    // nhi pick kra
    findSum(ind+1,candidates,ans,ds,target);

}

vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
    vector<vector<int>>ans;
    vector<int>ds;
    findSum(0,candidates,ans,ds,target);
    return ans;
}
};