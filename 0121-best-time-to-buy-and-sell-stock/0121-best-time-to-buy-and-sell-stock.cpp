class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int buy = INT_MAX;
        int sell = INT_MIN; 
        int profit = 0;

        int size = prices.size()-1;

        for(int i = 0; i <= size; i++){

            int buy1 = min(buy,prices[i]);//0

            if(buy1 < buy){

                buy = buy1;
                sell = INT_MIN;
                continue;

            } 

            sell = max(sell,prices[i]);

            int profit1 = sell - buy1;

            if(profit < profit1) profit = profit1;

        }



        

        if(profit > 0) return profit;

        if(buy > sell) return 0;

        return 0;

    }
};