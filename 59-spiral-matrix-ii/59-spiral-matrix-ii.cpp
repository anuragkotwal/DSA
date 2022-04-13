class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int> > ans(n,vector<int>(n,0));
        int curr=1;
        int low_row=0,high_row=n-1;
        int low_col=0,high_col=n-1;
        int curr_row=0,curr_col=0;
        n=n*n;
        while(curr<=n){
            curr_col=low_col;
            while(curr<=n && curr_col<=high_col){
                ans[low_row][curr_col]=curr++;
                curr_col++;
            }
            low_row++;
            curr_row=low_row;
            while(curr<=n && curr_row<=high_row){
                ans[curr_row][high_col]=curr++;
                curr_row++;
            }
            high_col--;
            curr_col=high_col;
            while(curr<=n && curr_col>=low_col){
                ans[high_row][curr_col]=curr++;
                curr_col--;
            }
            high_row--;
            curr_row=high_row;
            while(curr<=n && curr_row>=low_row){
                ans[curr_row][low_col]=curr++;
                curr_row--;
            }
            low_col++;
        }
        return ans;
    }
    
};