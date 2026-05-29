class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int bestbuy = INT_MAX;
        int sell = INT_MIN; 
        int maxprofit = 0;

        int size = prices.size()-1;

        for(int i = 0; i <= size; i++){

            int buy = min(bestbuy,prices[i]);

            if(buy < bestbuy){

                bestbuy = buy;
                sell = INT_MIN;
                continue;

            } 

            sell = max(sell,prices[i]);

            int profit = sell - buy;

            maxprofit = max(maxprofit,profit);

        }

        if(maxprofit > 0) return maxprofit;

        return 0;

    }
};