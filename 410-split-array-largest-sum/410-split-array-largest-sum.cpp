class Solution {
public:
    
    bool isSubarr(vector<int>& nums, int mid, int m){
        int subarr=1,sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            if(sum>mid)
                sum=nums[i],subarr++;
        }
        return subarr<=m;
    }
    
    int splitArray(vector<int>& nums, int m) {
        int mx=INT_MIN,sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            mx=max(nums[i],mx);
        }
        int l=mx,h=sum;
        cout<<l<<" "<<h<<endl;
        if(m==nums.size())
            return mx;
        int res=0;
        while(l<=h){
            int mid = l+(h-l)/2;
            if(isSubarr(nums,mid,m)==true)
                res=mid,h=mid-1;
            else
                l=mid+1;
        }
        return res;
    }
};