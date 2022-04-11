class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        map<int,int> mpp;
        int count=0;
        vector<int> arr;
        for(int i=0;i<nums.size();i++){
            mpp[nums[i]]++;
            if(mpp[nums[i]]<=2){
                arr.push_back(nums[i]);
                count++;
            }
        }
        for(int i=0;i<arr.size();i++)
            nums[i]=arr[i];
        return count;
    }
};