class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int lowest = prices[0];
        int maxProfit = 0;

        for (int p : prices) {

            if (p < lowest) {
                lowest = p;
            }

            else {
                int profit = p - lowest;
                maxProfit = max(maxProfit, profit);
            }

        }
        return maxProfit;
    }
};