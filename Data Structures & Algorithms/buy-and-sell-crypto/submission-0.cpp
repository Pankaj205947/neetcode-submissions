class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int min1 = INT_MAX;
       int profit =0;
       int i =0;
       int n = prices.size();
       while(i<n)
       {
        min1 = min(min1,prices[i]);
        int cnt = prices[i]-min1;
        profit = max(profit,cnt);
        i++;
       }
       return profit;

        
    }
};
