class Solution {
public:
    bool isAnagram(string s, string t) {
       int freqt[256] = {0};
       for(int i=0; i<s.size();i++){
           freqt[s[i]]++;
       }
       for(int i=0; i<t.size(); i++){
           freqt[t[i]]--;
       }
       for(int i=0; i<256;i++){
           if(freqt[i] != 0){
               return false;
           }
       }
       return true;
    }
};