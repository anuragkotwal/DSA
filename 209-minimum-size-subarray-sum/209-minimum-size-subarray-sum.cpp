class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int sum=0,l=0,r=0,n=nums.size(),ans=INT_MAX;
        while(r<n){
            sum+=nums[r];
            if(sum>=target){
                while(sum>=target)
                    sum-=nums[l++];
                ans=min(ans,(r-l)+2);
            }
            r++;
        }
        
        return ans==INT_MAX?0:ans;
    }
};