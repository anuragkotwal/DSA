class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        if(is_sorted(nums.begin(),nums.end()))
            return 0;
        vector<int> arr(nums);
        sort(arr.begin(),arr.end());
        int s=0,e=0;
        for(int i=0;i<nums.size();i++)
            if(arr[i]!=nums[i]){
                s=i;
                break;
            }
        for(int i=nums.size()-1;i>=0;i--)
            if(nums[i]!=arr[i]){
                e=i;
                break;
            }
        return e-s+1;
    }
};