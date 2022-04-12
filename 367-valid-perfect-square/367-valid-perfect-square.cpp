class Solution {
public:
    bool isPerfectSquare(int num) {
        long long l=0,h=num,mid=0;
        while(h>=l){
            mid = l + (h-l)/2;
            if(mid*mid == num)
                return true;
            else if(mid*mid<num)
                l=mid+1;
            else
                h=mid-1;
        }
        return false;
    }
};