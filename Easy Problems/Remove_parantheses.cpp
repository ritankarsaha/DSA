#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<math.h>
#include<utility>
#include<stack>
#include<list>
#include<map>
using namespace std;

int main()
{

}
class Solution {
public:
    bool isValid(string s) {
        stack<char> string;

        int i=0;
        while(i<s.length()){
            if(s[i]==')' && string.size()>0 &&string.top()=='(')
            string.pop();
            else if(s[i]=='}' && string.size()>0 &&string.top()=='{')
            string.pop();
            else if(s[i]==']' && string.size()>0 &&string.top()=='[')
            string.pop();
            else
            string.push(s[i]);
           
           i++;
        }
        if(string.size()==0)
        return true;
        else
        return false;
        
    }
};



/*


Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

An input string is valid if:

Open brackets must be closed by the same type of brackets.
Open brackets must be closed in the correct order.
Every close bracket has a corresponding open bracket of the same type.
 

Example 1:

Input: s = "()"
Output: true
Example 2:

Input: s = "()[]{}"
Output: true
Example 3:

Input: s = "(]"
Output: false
 

Constraints:

1 <= s.length <= 104
s consists of parentheses only '()[]{}'
*/