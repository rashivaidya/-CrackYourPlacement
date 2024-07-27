class Solution {
public:
    void backtrack(int openN, int closeN, int n, string current, vector<string>& res) {
        if (openN == n && closeN == n) {
            res.push_back(current);
            return;
        }
        
        if (openN < n) {
            backtrack(openN + 1, closeN, n, current + "(", res);
        }
        if (closeN < openN) {
            backtrack(openN, closeN + 1, n, current + ")", res);
        }
    }
    
    vector<string> generateParenthesis(int n) {
        vector<string> res;
        backtrack(0, 0, n, "", res);
        return res;
    }
};