class Solution {
public:
    int findMin(vector<int>& nums) {
        int l=0,h=nums.size()-1;
        while(h>l){
            int mid = l + (h-l)/2;
            if(nums[mid]<nums[h]) h = mid;
            else if(nums[mid]>nums[h])l = mid+1;
        }
        return nums[l];
    }
};