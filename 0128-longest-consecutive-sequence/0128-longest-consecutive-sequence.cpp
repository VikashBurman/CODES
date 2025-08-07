class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;
        unordered_set<int>st;
        for(auto it:nums) {
            st.insert(it);
        }
        for(auto it:st){
            if(st.find(it-1) == st.end()){
                int elm = it;
                int count = 1;
                while(st.find(elm+1) != st.end()){
                    count++;
                    elm = elm+1;
                }
                ans = max(ans,count);
            }
        }
        return ans;
    }
};