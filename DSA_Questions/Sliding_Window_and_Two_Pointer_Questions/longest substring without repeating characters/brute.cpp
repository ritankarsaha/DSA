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
    int lengthOfLongestSubstring(string s) {
        int len =0,maxlen =0;
        for(int i=0;i<s.length();i++){
            vector<int> hash(256,0);
            for(int j=i;j<s.length();j++){
                if(hash[s[j]] == 1)
                break;
                len = (j-i+1);
                maxlen = max(len,maxlen);
                hash[s[j]] = 1;

            }
        }

        return maxlen;
        
    }
};