class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int n=grid.size(),m=grid[0].size();
        vector<int> mat;
        while(k--){
            int temp=grid[0][0];
            for(int i=0;i<n;i++){
                for(int j=0;j<m;j++){
                    if(i==n-1 && j==m-1)
                        grid[0][0]=temp;
                    else if(j==m-1 && i<n-1)
                        swap(temp,grid[i+1][0]);
                    else
                        swap(temp,grid[i][j+1]);
                }
            }
        }
        return grid;
    }
};