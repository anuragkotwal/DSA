class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<int> res;
        multimap<int,int> mpp;
        for(int i=0;i<mat.size();i++){
            int count=0;
            for(int j=0;j<mat[i].size();j++){
                if(mat[i][j] == 1)
                    count++;
            }
            mpp.insert({count,i});
        }
        for(auto i:mpp){
            if(k==0)
                break;
            k--;
            res.push_back(i.second);
        }
        return res;
    }
};