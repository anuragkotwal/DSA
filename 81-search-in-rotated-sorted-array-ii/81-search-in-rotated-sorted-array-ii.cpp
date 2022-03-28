class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int l=0,h=nums.size()-1;
        while(h>=l){
            int mid = l + (h-l)/2;
            if(nums[mid] == target)
                return true;
            if(nums[l] == nums[mid] && nums[h] == nums[mid]){
                while(l<=h && nums[l] == nums[mid] && nums[h] == nums[mid]){
                    l++;
                    h--;
                }
            }
            else if(nums[mid]>=nums[l]){
                if(target<nums[mid] && target>=nums[l])
                    h = mid-1;
                else
                    l= mid+1;
            }
            else{
                if(target<=nums[h]&&target>nums[mid])
                    l = mid+1;
                else
                    h=mid-1;
            }
        }
        return false;
    }
};