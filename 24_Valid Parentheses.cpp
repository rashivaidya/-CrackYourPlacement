class Solution {
public:
    bool isValid(string s) {
         stack<char>c;
         int n = s.length();
         for(int i=0 ; i<n ; i++){
            if(s[i]=='(' || s[i]=='[' || s[i]=='{'){
                c.push(s[i]);
            }
            else{
                if(c.empty()){return false;}
                if(c.top()=='(' && s[i]==')'){
                    c.pop();
                }
                else if(c.top()=='{' && s[i]=='}'){
                    c.pop();
                }
                else if(c.top()=='[' && s[i]==']'){
                    c.pop();
                }
                else{
                    return false;
                }
            }
         }
         return c.empty();
    }
};