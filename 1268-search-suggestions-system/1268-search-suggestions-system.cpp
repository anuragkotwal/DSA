class Solution {
public:
    vector<vector<string>> suggestedProducts(vector<string>& products, string searchWord) {
        vector<vector<string>> res;
        string str="";
        sort(products.begin(),products.end());
        for(int i=0;searchWord[i]!='\0';i++){
            str+=searchWord[i];
            vector<string> ans;
            auto it=lower_bound(products.begin(),products.end(),str);
            for(int i=0;i<3&&it+i!=products.end();i++){
                string temp=*(it+i);
                if(temp.find(str)) break;
                ans.push_back(temp);
            }
            res.push_back(ans);
        }
        return res;
    }
};