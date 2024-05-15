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

void solve()
{
   int n,size=26;
   cin >> n;
   string final="zzz",current="";
   for(int i=0;i<size;i++)
   {
    for(int j=0;j<size;j++)
    {
        for(int k=0;k<size;k++)
        {
            if(i+j+k+3 ==n) //3 is added because all are starting from 0 to compensate that
             {
                current += char(i +'a');
                current += char(j+'a');
                current +=char(k+'a');
                final = min(final,current);
            }
        }
    }
   }
   cout << final <<endl;
}
int main()
{
  int t;
  cin >> t;
  while(t--)
  {
    solve();
  }
}