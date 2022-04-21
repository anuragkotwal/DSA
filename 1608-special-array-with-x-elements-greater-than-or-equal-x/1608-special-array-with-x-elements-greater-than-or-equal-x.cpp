class Solution {
public:
    int specialArray(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int l=0,h=n-1;
        if(nums[0]>=n)
            return n;
        while(l<=h){
            int mid=l+(h-l)/2;
            if(nums[mid]>=(n-mid) && nums[mid-1]<(n-mid))
                return n-mid;
            else if(nums[mid]>=(n-mid)) h=mid-1;
            else l=mid+1;
        }
        return -1;
    }
};