// 121. Best Time to Buy and Sell Stock
// You are given an array prices where prices[i] is the price of a given stock on the ith day.

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size() == 0) return 0;
        
        int ans = 0;
        
        int start = prices[0], end = prices[0];
        
        for(int i = 0; i < prices.size(); i++){
            if(prices[i] < start){
                ans = max(ans, end - start);
                start = prices[i];
                end = prices[i];
            }else{
               end = max(end, prices[i]);
            }
        }
        ans = max(ans, end - start);
        return ans;
    }
};