class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int Profit = 0;
        int mini = prices[0];

        for (int i = 1; i < prices.size(); i++) {
            int cost = prices[i] - mini;
            Profit = max(Profit, cost);

            mini = min(mini, prices[i]);
        }
        return Profit;
    }
};