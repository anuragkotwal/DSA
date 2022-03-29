class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int res;
        for(int i=0;i<nums.size();i++){
            if(nums[abs(nums[i])]>0)
                nums[abs(nums[i])] = -nums[abs(nums[i])];
            else
                res=abs(nums[i]); 
        }
        return res;
    }
};