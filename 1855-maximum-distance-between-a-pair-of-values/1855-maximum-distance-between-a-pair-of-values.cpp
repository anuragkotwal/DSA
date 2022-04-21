class Solution {
public:
    int maxDistance(vector<int>& nums1, vector<int>& nums2) {
        int res=0,l=0,h=0;
        while(l<nums1.size() and h<nums2.size()){
            if(nums1[l]<=nums2[h]){
                if(l<=h){
                    res=max(res,h-l);
                }
                h++;
            }else
                l++;
        }
        return res;
    }
};