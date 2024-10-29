class Solution {
public:
    vector<int>val{1000,900,500,400,100,90,50,40,10,9,5,4,1};
    vector<string>sym{"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
    string intToRoman(int num) {
        string ans = "";
        for(int i=0;i<13;i++){
            if(num == 0) break;
            int times = num/val[i]; //iterate through the val vector
//58 ko divide krenge to 50 se hi divide hogga how many time we can take it
            while(times--){
                ans += sym[i];
            }
            num = num%val[i];
        }
        return ans;
    }
};