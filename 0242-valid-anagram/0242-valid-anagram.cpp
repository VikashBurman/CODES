class Solution {
public:
    bool isAnagram(string s, string t) {
        int freq[26] ={0};
        int n1 = s.size();
        int n2 = t.size();
        if(n1!= n2) return false;
        for(int i=0;i<n1;i++){
            freq[s[i]-'a']++;
            freq[t[i]-'a']--;
        }
        for(int num :freq){
            if(num != 0){
                return false;
            }
        }
        return true;
    }
};