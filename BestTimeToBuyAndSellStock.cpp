//I saw hints for this question
//For this problem, to avoid TLE, we need to keep track of the minPrice

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = prices[0]; //we need to find the lowest price to buy the stock
        int max = 0;
        int profit;

        for(int i = 1; i < prices.size(); i++){
            if(prices[i]<minPrice){
                minPrice = prices[i]; 
            }
            else{
                profit = prices[i]-minPrice;
                if(profit > max) max = profit;
            }
            //cout << minPrice << " " << max << "\n";
        }

        return max;
    }
};
