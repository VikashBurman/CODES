class Solution {
public:
    bool checkIfPangram(string sentence) {
        int n = sentence.size();
        int ch = 97;
        sort(sentence.begin(),sentence.end());
        for(int i=0;i<n;i++){
            if(ch == int(sentence[i])){
                ch++;
                // cout<<ch<<" "; 
            }
        }
        if(ch == 123){
            return true;
        }
        return false;
    }
};