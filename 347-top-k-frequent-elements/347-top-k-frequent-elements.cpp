class Solution {
public:
    static bool comp(pair<int,int> a, pair<int,int> b){
        return a.second<b.second;
    }
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int> mpp;
        vector<pair<int,int>> arr;
        vector<int> ans;
        for(int i=0;i<nums.size();i++)
            mpp[nums[i]]++;
        for(auto i:mpp)
            arr.push_back(i);
        sort(arr.begin(),arr.end(),comp);
        for(int i=arr.size()-1;i>=0;i--){
            if(k==0) break;
            ans.push_back(arr[i].first);
            k--;
        }
        return ans;
    }
};