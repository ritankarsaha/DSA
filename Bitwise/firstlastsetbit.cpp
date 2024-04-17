#include<bits/stdc++.h>
using namespace std;
 bool powerofTwo(unsigned int n)
    {
        return (!(n & n-1));
    }
    bool lastandfirst(unsigned int n)
    {
      if(n==1)
      return true;
      if(n==2)
      return false;
      return powerofTwo(n-1);
    }
int main()
{
   int n;
   cin >> n;
   if(lastandfirst(n))
   cout << "YES" <<endl;
   else
   cout << "NO" <<endl;
}