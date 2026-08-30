class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size()==0)return 0;
        int buy=prices[0];
        int sell=0;
        int profit=0;
        for(int i=1;i<prices.size();i++){
            if(prices[i]<buy){
                buy=prices[i];
            }
            if(prices[i]>buy){
                sell=prices[i];
                profit=max(profit,sell-buy);
            }
        }
        return profit;
    }
};