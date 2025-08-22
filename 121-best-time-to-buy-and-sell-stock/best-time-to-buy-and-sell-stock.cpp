class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int lowest = INT_MAX;
        int totalP = 0;
        int todayP = 0;
        for (int i = 0; i < prices.size(); i++) {
            if (prices[i] < lowest) {
                lowest = prices[i];
            }
            todayP = prices[i] - lowest;
            if (totalP < todayP) {
                totalP = todayP;
            }
        }
        return totalP;
    }
};
