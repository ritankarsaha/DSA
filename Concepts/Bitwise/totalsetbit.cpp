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


unsigned int countsetbits(unsigned int n)
{
    unsigned int count = 0;
    while(n)
    {
      count += n&1;
      n>>=1;
    }
    
 return count;
}
unsigned int totalsetbit(unsigned int n)
{
    unsigned int total = 0;
    for(int i=1;i<=n;i++)
    {
        total = total + countsetbits(i);
    }
    return total;
}
int main()
{
    int n;
    cin >> n;
    cout << totalsetbit(n);
}