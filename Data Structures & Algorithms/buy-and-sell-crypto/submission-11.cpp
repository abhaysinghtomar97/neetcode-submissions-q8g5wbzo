class Solution {
   public:
    int maxProfit(vector<int>& prices) {
        int maxi = 0;
        int l = 0, r = 1, profit;
        while (r < prices.size()) {
            if (prices[l] < prices[r]) {
                profit = prices[r] - prices[l];

                maxi = max(maxi, profit);
            } else
                l = r;
            r++;
        }
        return maxi;
    }
};
