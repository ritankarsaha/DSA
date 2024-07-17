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


class solution{
 public:
 pair<int ,int>get(int a, int b){
    a = a^b;
    b = a^b;
    a= a^b;

    return {a , b};
 }
};
int main()
{
   //driver code over here
}