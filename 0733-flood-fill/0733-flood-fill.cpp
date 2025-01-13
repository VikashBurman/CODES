class Solution {
public:
    vector<vector<int>> dfs(vector<vector<int>>& image, int sr, int sc, int color,vector<vector<int>>&ans,int delRow[],int delCol[],int intColor){
        ans[sr][sc] = color;
        int n = image.size();
        int m = image[0].size();
        for(int i=0;i<4;i++){
            int nrow = sr+delRow[i];
            int ncol = sc+delCol[i];
            if(nrow>=0 && nrow<n && ncol>=0 && ncol<m &&
               image[nrow][ncol] == intColor && ans[nrow][ncol] != color 
            ){
              dfs(image,nrow,ncol,color,ans,delRow,delCol,intColor);
            }
        }
        return ans;
    }   
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        vector<vector<int>>ans = image;
        int intColor = image[sr][sc];
        int delRow[] = {-1,0,+1,0};
        int delCol[] = {0,+1,0,-1};
        dfs(image,sr,sc,color,ans,delRow,delCol,intColor);
        return ans;
        
    }
};