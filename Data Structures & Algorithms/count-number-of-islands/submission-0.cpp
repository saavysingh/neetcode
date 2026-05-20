class Solution {

private:
    void checkNeighbours(vector<vector<char>>& grid, int i , int j, int n, int m){
       if (i < 0 || i >= n || j < 0 || j >= m || grid[i][j] != '1') {
        return;
    }
       grid[i][j] = '2';
        if(i-1>=0){
            checkNeighbours(grid,i-1,j,n,m);
        } 
        if(j-1>=0){
            checkNeighbours(grid,i,j-1,n,m);
        } 
        if(j+1<=m){
            checkNeighbours(grid,i,j+1,n,m);
        }
        if(i+1<=n){
            checkNeighbours(grid,i+1,j,n,m);
        }
        return;
    }

public:
    int numIslands(vector<vector<char>>& grid) {
        int n = grid.size(), m = grid[0].size(),count = 0;

        if(n == 1 && m ==1){
            return grid[0][0] - '0';
        }
        for(int i = 0;i<n;i++){
            for(int j = 0;j<m;j++){
                if(grid[i][j] == '1'){
                    count++;
                    checkNeighbours(grid,i,j,n,m);
                }
            }
        }
        return count;
    }
};
