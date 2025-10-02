class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxprofit=0;
        int minprice=prices[0];
        for(int i=1;i<prices.size();i++){
            int profit=prices[i]-minprice;
            maxprofit=max(maxprofit, profit);
            minprice=min(prices[i],minprice);
        }
        return maxprofit;
    }
};