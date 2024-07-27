class Solution {
public:
    string largestOddNumber(string num) {
        string ans = "";
        for(int i=num.size()-1;i>=0;i--){
            if(int(num[i] - '0')%2 != 0){
                for(int j=i;j>=0;j--){
                    ans += num[j];
                }
                break;
            }
        }
        // cout<<ans;
         reverse(ans.begin(),ans.end());
         return ans;
    }
};