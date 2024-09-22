class Solution {
  public:
    // Function to return the precedence of operators
    int priority(char ch) {
        if (ch == '^') {
            return 3;
        }
        else if (ch == '*' || ch == '/') {
            return 2;
        }
        else if (ch == '+' || ch == '-') {
            return 1;
        }
        else {
            
            return -1;
        }
    }

    // Function to convert an infix expression to a postfix expression.
    string infixToPostfix(string s) {
        stack<char> st;
        string ans = "";

        for (int i = 0; i < s.size(); i++) {
           
            if ((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z') || (s[i] >= '0' && s[i] <= '9')) {
                ans += s[i];
            }
            
            else if (s[i] == '(') {
                st.push(s[i]);
            }
           
            else if (s[i] == ')') {
                while (!st.empty() && st.top() != '(') {
                    ans += st.top();
                    st.pop();
                }
                st.pop(); 
            }
           
            else {
                while (!st.empty() && priority(s[i]) <= priority(st.top())) {
                    ans += st.top();
                    st.pop();
                }
                st.push(s[i]);
            }
        }

       
        while (!st.empty()) {
            ans += st.top();
            st.pop();
        }

        return ans;
    }
};