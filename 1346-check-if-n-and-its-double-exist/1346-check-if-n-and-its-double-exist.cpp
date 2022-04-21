class Solution {
public:
    
    bool BinarySearch(vector<int> arr, int l ,int h, int key){
        while(l<=h){
            int mid=l+(h-l)/2;
            if(arr[mid]==key)
                return true;
            else if(arr[mid]>key)
                h=mid-1;
            else
                l=mid+1;
        }
        return false;
    }
    
    bool checkIfExist(vector<int>& arr) {
        sort(arr.begin(),arr.end());
         for(int i=0;i<arr.size();i++){
            if(arr[i]%2==0 && arr[i]<0){
                if(BinarySearch(arr,i+1,arr.size()-1,arr[i]/2))
                    return true;
            }
             else
                 if(BinarySearch(arr,i+1,arr.size()-1,2*arr[i]))
                    return true;
        }
       
        return false;
    }
};