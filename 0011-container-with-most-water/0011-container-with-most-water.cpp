class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int ans = 0;
        int i=0;int j=n-1;

        while(i<j){
            int wt = j-i;
            int ht = min(height[i],height[j]);
            ans = max(ans,wt*ht);
            if(height[i]>height[j]){
                j--;
            }else{
                i++;
            }
        }
        return ans;
    }
};