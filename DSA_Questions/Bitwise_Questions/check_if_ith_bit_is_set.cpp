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

bool check ()
{
   int n,k;
   cin >> n >> k;
   return((n & (1 << k)!=0));
}
int main()
{
    //driver code.
}