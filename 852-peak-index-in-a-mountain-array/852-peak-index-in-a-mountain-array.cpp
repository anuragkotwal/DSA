class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int count=0;
        int l=0,h=arr.size()-1;
        while(h>=l){
            int mid=l+(h-l)/2;
            if(arr[mid]>arr[mid+1]&&arr[mid]>arr[mid-1])
                return mid;
            if(arr[mid]<arr[mid-1])
                h=mid;
            else
                l=mid+1;
        }
        return -1;
    }
};