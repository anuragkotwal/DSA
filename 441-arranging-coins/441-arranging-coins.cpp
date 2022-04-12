class Solution {
public:
    int arrangeCoins(int n) {
        long long count=1;
        while(n>0){
            count++;
            n-=count;
        }
        return count-1;
    }
};