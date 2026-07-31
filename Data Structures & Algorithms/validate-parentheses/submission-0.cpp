class Solution {
public:
    bool isValid(string s) {
        std::stack<char> st;
        for (char c : s){
            // Add open parenthesis to stack
            if (c == '(' || c == '[' || c == '{'){
                st.push(c);
            }
            // Must be close parenthesis, so check if match
            else {
                if (st.empty()) return false;

                char top = st.top();
                if ((c == ')' && top == '(') ||
                    (c == ']' && top == '[') ||
                    (c == '}' && top == '{')){
                        st.pop();
                    }
                else {
                    return false;
                }

            }
            
        }
        return st.empty();
    }
};
