class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.size()!=t.size()) return false;

        int mp1[250] = {0};
        int mp2[250] = {0};

        for(int i=0;i<s.size();i++){
            if(!mp1[s[i]] && !mp2[t[i]]){
                mp1[s[i]] = t[i];
                mp2[t[i]] = s[i];
            }else{
                if(mp1[s[i]] != t[i]){
                    return false;
                }
            }
        }
        return true;

    }
};