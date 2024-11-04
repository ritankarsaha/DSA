class Solution {
public:
    bool isIsomorphic(string s, string t) {
       char s_to_t[128] = {0};
       char t_to_s[128] = {0};

       for(int i=0;i<s.size();i++){

        char s_char = s[i];
        char t_char = t[i];


        if(s_to_t[s_char]==0)
        s_to_t[s_char] = t_char;
        else if(s_to_t[s_char] != t_char)
        return false;

        if(t_to_s[t_char] == 0)
        t_to_s[t_char] = s_char;
        else if(t_to_s[t_char] != s_char)
        return false;
       } 

       return true;
    }
};