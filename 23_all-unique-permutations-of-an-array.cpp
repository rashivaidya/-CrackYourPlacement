#include<bits/stdc++.h>
using namespace std;

class Solution {
private:
    void recurPermute(vector<int>& ds, vector<int>& nums, vector<vector<int>>& ans, vector<bool>& freq) {
        if (ds.size() == nums.size()) {
            ans.push_back(ds);
            return;
        }
        for (int i = 0; i < nums.size(); i++) {
            if (i > 0 && nums[i] == nums[i-1] && !freq[i-1]) continue;
            if (!freq[i]) {
                ds.push_back(nums[i]);
                freq[i] = true;
                recurPermute(ds, nums, ans, freq);
                freq[i] = false;
                ds.pop_back();
            }
        }
    }

public:
    vector<vector<int>> uniquePerms(vector<int>& arr, int n) {
        vector<vector<int>> ans;
        vector<int> ds;
        vector<bool> freq(n, false);
        sort(arr.begin(), arr.end());
        recurPermute(ds, arr, ans, freq);
        return ans;
    }
};