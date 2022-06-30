class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int curr_high = prices.back();
        int max_pro = 0;
        for(int i=prices.size()-1; i>=0; i--)
        {
           max_pro = max(max_pro, curr_high-prices[i]);
           curr_high = max(curr_high, prices[i]);
        }
       
        return max_pro;
        
        
    }
};