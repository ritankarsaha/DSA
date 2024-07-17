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
    string s;
    int n = s.length(),len = 0,maxlen=0;
   for(int i=0;i<n;i++)
   {
    int hash[256] = {0};
    for(int j=i;j<n;j++)
    {
        if(hash[s[j]] == 1)
        break;
        len = j - i +1;
        maxlen = max(len,maxlen);
        hash[s[j]] == 1;
    }
   }
   cout << maxlen;
}