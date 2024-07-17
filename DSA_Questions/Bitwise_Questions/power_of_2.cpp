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


class Solution {
public:
    bool isPowerOfTwo(int n) {
        return (n>0 && (n&(n-1)) == 0);
    }
};
int main()
{
  //driver code here.
}