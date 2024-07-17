class Solution {
public:
    int maxProfit(vector<int>& v) {
        int mini = v[0] , profit = 0;
        for(int i=1;i<v.size();i++){
            int gain = v[i] - mini;
            profit = max(profit,gain);
            mini = min(mini,v[i]);
        }
        return profit;
    }
};