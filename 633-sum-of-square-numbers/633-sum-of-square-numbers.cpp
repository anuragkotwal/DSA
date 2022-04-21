class Solution {
public:
    bool judgeSquareSum(int c) {
        if(c<3)
            return true;
        long long l=0,h=sqrt(c);
        while(h>=l){
           if(l*l+h*h==c)
               return true;
            else if(l*l+h*h<c)
                l++;
            else
                h--;
        }
        return false;
    }
};