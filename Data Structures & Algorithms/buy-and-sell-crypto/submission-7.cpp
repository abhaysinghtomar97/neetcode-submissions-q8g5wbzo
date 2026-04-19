class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxi=INT_MIN;
       int l = 0, r = 1,profit;
       while(r < prices.size()){

            if(prices[l] < prices[r]){
                  profit = prices[r] - prices[l];

            maxi = max(maxi, profit);
            }
            else  l = r;
            r++;
    }
            if(maxi >=0 ) return maxi;
            else return 0;
    }
};
