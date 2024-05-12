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
void rotate(vector<int> v)
{
    int temp = v[0];
    for(int i=1;i<v.size();i++){
       v[i-1] = v[i];
    }
    v[v.size()-1] = v[0];

    for(int x:v){
        cout << x << " ";
    }
    }
};
int main()
{

}