class Solution {
public:
    int twoCitySchedCost(vector<vector<int>>& costs) {
        int n=costs.size();
        vector<int>temp(n);
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=costs[i][0]+costs[i][1];
            temp[i]=costs[i][0]-costs[i][1];
        }
        sort(temp.begin(),temp.end());
        
        for(int i=0;i<n/2;i++)
            sum+=temp[i];
        for(int i=n/2;i<n;i++)
            sum-=temp[i];
        return sum/2;
    }
};