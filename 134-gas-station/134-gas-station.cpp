class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        //brute force approach TLE!! O(n^2)
    //     for(int i=0;i<gas.size();i++){
    //         int totalFuel=0,count=0,j=i;
    //         while(count<gas.size()){
    //             totalFuel+=(gas[j%gas.size()]-cost[j%gas.size()]);
    //             if(totalFuel<0)
    //                 break;
    //             count++;
    //             j++;
    //         }
    //         if(count==gas.size() || totalFuel>=0)
    //             return i;
    //     }
    //     return -1;
        //Greedy Approach O(n)
        int tank=0,totalFuel=0,ind=0;
        for(int i=0;i<gas.size();i++){
            int temp=gas[i]-cost[i];
            tank+=temp;
            if(tank<0){
                ind=i+1;
                tank=0;
            }
            totalFuel+=temp;
        }
        return totalFuel>=0?ind:-1;
    }
};