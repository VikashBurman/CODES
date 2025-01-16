class Solution {
public:
    void bfs(int row,int col,vector<vector<int>>&vis,           vector<vector<char>>grid){
        int m = grid.size();
        int n = grid[0].size();
        int delRow[] = {-1,0,1,0};
        int delCol[] = {0,1,0,-1};
        queue<pair<int,int>>q;
        q.push({row,col});
        vis[row][col] = 1;
        while(!q.empty()){
            int r = q.front().first;
            int c = q.front().second;
            q.pop();
            for(int i=0;i<4;i++){
                int nrow = r+delRow[i];
                int ncol = c+delCol[i];
                if(nrow>=0 && nrow<m && ncol>=0 && ncol<n &&
                   !vis[nrow][ncol] && grid[nrow][ncol] == '1'){
                    vis[nrow][ncol] = 1;
                    q.push({nrow,ncol});
                }
            }
        }


    }
    int numIslands(vector<vector<char>>& grid) {
        int count = 0;
        int row = grid.size();
        int col = grid[0].size();
        vector<vector<int>>vis(row,vector<int>(col,0));
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(!vis[i][j] && grid[i][j] == '1'){
                    bfs(i,j,vis,grid);
                    count++;
                }
            }
        }
        return count;


    }
};