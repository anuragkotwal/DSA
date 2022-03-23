class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxpro=0;
        for(int i=0;i<prices.size()-1;i++){
            if(prices[i]<prices[i+1])
                maxpro+=prices[i+1]-prices[i];
        }
        return maxpro;
    }
};