class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        // 1st Approach
        // int l=0,h=nums.size();
        // while(l<h){
        //     int mid = l + (h-l)/2;
        //     if(nums[mid]>=target)
        //         h = mid;
        //     else
        //         l=mid+1;
        // }
        // int temp=l;
        // l=0,h=nums.size();
        // while(l<h){
        //     int mid=l+(h-l)/2;
        //     if(nums[mid]>target)
        //         h=mid;
        //     else
        //         l=mid+1;
        // }
        // return temp==l?vector<int> {-1,-1}:vector<int> {temp,l-1};
        // 2nd Approach
        int lo = lower_bound(nums.begin(), nums.end(), target) - nums.begin();
        if (lo == nums.size() || nums[lo] != target)
            return {-1, -1};
        int hi = upper_bound(nums.begin(), nums.end(), target) - nums.begin() - 1;
        return {lo, hi};
    }
};