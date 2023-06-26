// 20. Valid Parentheses
// Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.


class Solution {
public:
    bool isValid(string s) {
      stack<char>st; 
        for(char t: s) {
            if(t=='(' || t=='{' || t == '[') st.push(t); 
            else {
                if(st.size() == 0) return false; 
                char ch = st.top(); 
                st.pop(); 
                if((t == ')' and ch == '(') or  (t == ']' and ch == '[') or (t == '}' and ch == '{'))               continue;
                else return false;
            }
        }
        return st.empty(); 
        
    }
};
