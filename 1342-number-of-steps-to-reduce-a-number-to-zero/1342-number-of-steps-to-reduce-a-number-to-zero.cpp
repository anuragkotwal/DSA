class Solution {
public:
    int numberOfSteps(int num) {
        //Naive Approach
        // int count=0;
        // while(num){
        //     if(num%2==0)
        //         num/=2;
        //     else
        //         num--;
        //     count++;
        // }
        // return count;
        //Recursive Approach
        if(num==0) return 0;
        if(num==1) return 1;
        return numberOfSteps(num/2)+(num%2==0?1:2);
    }
};