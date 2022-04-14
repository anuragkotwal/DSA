class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int l=0,h=nums.size();
        while(l<h){
            int mid = l + (h-l)/2;
            if(nums[mid]>=target)
                h = mid;
            else
                l=mid+1;
        }
        int temp=l;
        l=0,h=nums.size();
        while(l<h){
            int mid=l+(h-l)/2;
            if(nums[mid]>target)
                h=mid;
            else
                l=mid+1;
        }
        return temp==l?vector<int> {-1,-1}:vector<int> {temp,l-1};
    }
};