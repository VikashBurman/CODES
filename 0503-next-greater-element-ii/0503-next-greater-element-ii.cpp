class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        stack<int>st;int res;int n = nums.size();
        vector<int>ans(n);
        
        for(int i=(2*n-1);i>=0;i--){
            // int elm =;
            while(!st.empty() && st.top()<= nums[i%n]){
                st.pop();
            }
            if(i<n){
                res = st.empty()?-1:st.top();
                ans[i] = res;
            }
            st.push( nums[i%n]);
        }
        return ans;
    }
};