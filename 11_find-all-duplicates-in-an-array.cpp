class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> ans;
        sort(begin(nums),end(nums));
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i-1]==nums[i])
            {
                ans.push_back(nums[i]);
            }
        }
        return ans;
    }
};