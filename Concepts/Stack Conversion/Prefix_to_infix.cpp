class Solution {
public:
    string preToInfix(string s) {
        stack<string> st;
        
        for (int i = s.length() - 1; i >= 0; i--) {
          
            if (isalnum(s[i])) {
                st.push(string(1, s[i]));
            } 
           
            else {
                
                string s1 = st.top();
                st.pop();
                string s2 = st.top();
                st.pop();
                string temp = "(" + s1 + s[i] + s2 + ")";
                st.push(temp);
            }
        }
        return st.top();
    }
};