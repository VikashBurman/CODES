class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s == goal) return true;
        if(s.size()!=goal.size()) return false;
        queue<char>q1,q2;
        for(auto it:s){
            q1.push(it);
        }
        for(auto it:goal){
            q2.push(it);
        }
        int n = s.size();
        while(n){
            char ch = q1.front();
            q1.pop();
            q1.push(ch);
            if(q1==q2) return true;
            n--;
        }
        return false;

    }
};