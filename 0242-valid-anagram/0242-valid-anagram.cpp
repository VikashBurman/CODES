class Solution {
public:
    bool isAnagram(string s, string t) {
        int n1  = s.size();
        int n2  = t.size();
        if(n1 != n2) return false;
        map<char,int>mp1;
        map<char,int>mp2;
        for(auto it:s){
            mp1[it]++;
        }
        for(auto it:t){
            mp2[it]++;
        }
        return mp1==mp2;
    }
};