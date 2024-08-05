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
    long long count(int n) {
        return pow(2,n*(n-1)/2);
    }
};