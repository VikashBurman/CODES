class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
       long long  temp = x;
        long long  revrs = 0;
        while(temp!=0){
            int rem = temp%10;
            revrs = revrs*10+rem;
            temp /=10;
        }
        cout<<temp;
        
        if(revrs == x){
            return true;
        }else
        return false;
       
    }
};