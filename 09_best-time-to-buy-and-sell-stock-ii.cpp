class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        vector<int> dp(2,0);
        for(int ind=n-1;ind>=0;ind--){
            dp[0]=max(dp[1]+prices[ind],dp[0]);
            dp[1]=max(dp[0]-prices[ind],dp[1]);
        }
        return dp[1];
    }
};