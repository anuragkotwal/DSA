class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit=0,minValue=prices[0];
        for(int i=1;i<prices.size();i++){
            int temp = prices[i]-minValue;
            if(profit<temp)
                profit = temp;
            if(minValue>prices[i])
                minValue=prices[i];
        }
        return profit;
    }
};