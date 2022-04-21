class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int count=0;
        for(int i=0;i<grid.size();i++){
            int l=0,h=grid[i].size()-1;
            while(h>=l){
                int mid = l+(h-l)/2;
                if(grid[i][mid]<0){
                    count++;
                    h--;
                }
                else 
                    l++;
            }
        }
        return count;
    }
};