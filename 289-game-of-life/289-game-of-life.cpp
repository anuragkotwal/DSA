class Solution {
public:
    
    static int countNeighbors(vector<vector<int>> mat, int i, int j, int n, int m){
        int count=0;
        for(int a=i-1;a<i+2;a++){
            for(int b=j-1;b<j+2;b++){
                if((a==i and b==j) or a<0 or b<0 or a==n or b==m)
                    continue;
                if(mat[a][b]==1 or mat[a][b]==3)
                    count++;
            }
        }
        return count;
    }
    
    void gameOfLife(vector<vector<int>>& board) {
        int n=board.size(),m=board[0].size();
        vector<vector<int>> temp(n,vector<int>(m,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                int count = countNeighbors(board,i,j,n,m);
                if(board[i][j]==1){
                    if (count==2 or count==3)
                        board[i][j]=3;
                }
                else if(count==3)
                    board[i][j]=2;
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(board[i][j]==1)
                    board[i][j]=0;
                else if(board[i][j]==2 or board[i][j]==3)
                    board[i][j]=1;
            }
        }
    }
};