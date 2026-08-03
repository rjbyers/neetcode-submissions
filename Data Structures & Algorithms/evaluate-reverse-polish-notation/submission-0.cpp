class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        std::stack<int> st;
        int i = 0;
        while (i < tokens.size()){
            if (tokens[i] != "*" && tokens[i] != "/" && tokens[i] != "+" && tokens[i] != "-"){
                st.push(stoi(tokens[i]));
            }
            else{
                int n = st.top();
                st.pop();
                int m = st.top();
                st.pop();
                
                if (tokens[i] == "*"){
                    st.push(m * n);
                }
                
                else if (tokens[i] == "+"){
                    st.push(m + n);
                }
                
                else if(tokens[i] == "-"){
                    st.push(m - n);
                }

                else if(tokens[i] == "/"){
                    st.push(m / n);
                }
            }
            i++;
        }
        return st.top();
    }
};
