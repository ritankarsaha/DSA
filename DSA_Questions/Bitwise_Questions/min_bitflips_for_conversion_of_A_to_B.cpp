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
    int minBitFlips(int start, int goal) {
        int result = start ^ goal;
        int count =0;
        while(result){
            count += result & 1;
            result = result >> 1;
        }
        return count;
    }
};

int main()
{
  //driver cod here.
}