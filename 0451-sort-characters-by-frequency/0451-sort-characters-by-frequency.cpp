class Solution {
public:
    string frequencySort(string s) {
        string ans;
        unordered_map<char,int>mp;
        for(auto it:s){
            mp[it]++;
        }
        vector<pair<int,char>>v;
        for(auto it:mp){
            v.push_back({it.second,it.first});
        }
        sort(v.begin(), v.end(), greater<pair<int, char>>());
        for(auto it:v){
            while(it.first--){
                ans+=it.second;
            }
        }
        return ans;

    }
};