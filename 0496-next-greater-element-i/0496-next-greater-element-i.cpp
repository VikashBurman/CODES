class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int>mp;int res=0;
        stack<int>st;
        vector<int>ans;
        for(int i = nums2.size()-1;i>=0;i--){
            int elm = nums2[i];
            while(!st.empty() && st.top()<elm){
                st.pop();
            }
            if(st.empty()){
                res = -1;
            }else{
                res = st.top();
            }
            mp.insert({elm,res});
            st.push(elm);
        }
        for(auto x : nums1){
            ans.push_back(mp[x]);
        }
        return ans;

    }
};