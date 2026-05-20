class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int maxSoFar = prices[n-1];
        int profit = 0;

        for(int i = n-2;i>=0;i--){
            profit = max(profit, maxSoFar-prices[i]);
            if(prices[i]>maxSoFar){
                maxSoFar= prices[i];
            }
        }
        return profit;
    }
};


// [8,10,4,2,20]
// [20,20,20,20,20]