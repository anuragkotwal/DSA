class Solution {
public:
    int mySqrt(int x) {
        long long int l=1;
        long long int h=x,res;
        while(h>=l){
            long long mid = l + (h-l)/2;
            if(mid*mid == x){
                return mid;
            }
            else if(mid*mid<x)
                l=mid+1;
            else
                h=mid-1;
        }
        return h;
    }
};