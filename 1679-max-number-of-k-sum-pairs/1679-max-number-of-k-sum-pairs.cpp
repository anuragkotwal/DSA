class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        int i=0,j=nums.size()-1;
        int count=0;
        sort(nums.begin(),nums.end());
        while(i<j){
            if(nums[i]+nums[j]>k){
                j--;continue;
            }
            if(nums[i]+nums[j]==k){
                i++,j--,count++;
                continue;
            }
            if(nums[i]+nums[j]<k){
                i++;continue;
            }
        }
        return count;
    }
};