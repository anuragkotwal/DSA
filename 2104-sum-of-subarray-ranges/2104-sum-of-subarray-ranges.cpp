class Solution {
public:
    long long subArrayRanges(vector<int>& nums) {
        long long res=0,n=nums.size();
        for(int i=0;i<n;i++){
            int minn=nums[i],maxn=nums[i];
            for(int j=i;j<n;j++){
                minn=min(minn,nums[j]);
                maxn=max(maxn,nums[j]);
                res+=(maxn-minn);
            }
        }
        return res;
    }
};