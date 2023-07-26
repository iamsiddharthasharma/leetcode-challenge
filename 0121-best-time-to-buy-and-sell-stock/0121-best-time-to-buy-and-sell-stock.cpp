class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int buy = 0;
        int mx = 0;
        for(int i = 0;i<n;i++)
        {
            if(prices[i]<prices[buy])
            {
                buy = i;
            }
            if(prices[i] - prices[buy]>mx)
            {
                mx = prices[i] - prices[buy];
            }
        }
        return mx;
    }
};