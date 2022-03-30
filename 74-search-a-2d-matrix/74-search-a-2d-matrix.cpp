class Solution {
public:
//     bool BinarySearch(vector<int>& arr, int target){
//         int l=0,h=arr.size()-1;
//         while(h>=l){
//             int mid = l + (h-l)/2;
//             if(arr[mid]==target)
//                 return true;
//             else if(arr[mid]<target)
//                 l++;
//             else
//                 h--;
//         }
//         return false;
//     }
//     bool searchMatrix(vector<vector<int>>& matrix, int target) {
//         int flag=0;
//         for(int i=0;i<matrix.size();i++){
//             if(BinarySearch(matrix[i],target)){
//                 flag=1;
//                 break;
//             }
//         }
//         if(flag)
//             return true;
//         else
//             return false;
// }
        bool searchMatrix(vector<vector<int>>& matrix, int target) {
            int row=0,col=matrix[0].size()-1;
            while(row<matrix.size()&&col>=0){
                if(matrix[row][col]==target)
                    return true;
                else if(target>matrix[row][col])
                    row++;
                else
                    col--;
            }
            return false;
        }
};