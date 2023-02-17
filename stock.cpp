//format acc to leetcode

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int ans = 0;
        int temp = prices[0];
        for(int i=1; i<n; i++){
            int profit = prices[i]-temp;
            ans = max(ans,profit);
            temp = min(temp,prices[i]);
        }
        return ans;
    };
};