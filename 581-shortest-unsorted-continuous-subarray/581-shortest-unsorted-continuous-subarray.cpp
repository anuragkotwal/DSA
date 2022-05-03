class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        //Approach 1
        // if(is_sorted(nums.begin(),nums.end()))
        //     return 0;
        // vector<int> arr(nums);
        // sort(arr.begin(),arr.end());
        // int s=0,e=0;
        // for(int i=0;i<nums.size();i++)
        //     if(arr[i]!=nums[i]){
        //         s=i;
        //         break;
        //     }
        // for(int i=nums.size()-1;i>=0;i--)
        //     if(nums[i]!=arr[i]){
        //         e=i;
        //         break;
        //     }
        // return e-s+1;
        
        //Approach 2 w/o using extra space
        if(is_sorted(nums.begin(),nums.end()))
            return 0;
        int s=0,e=0,i=0,j=nums.size()-1;
        int curr_min=INT_MIN,curr_max=INT_MAX;
        while(j>=0){
            if(nums[i]>=curr_min)curr_min=nums[i];
            else e=i;
            if(nums[j]<=curr_max)curr_max=nums[j];
            else s=j;
            i++;j--;
        }
        return e-s+1;
    }
};