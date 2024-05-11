#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    int number,size;
    cin >> size;
    for(int i=0;i<size;i++){
        cin >> number;
        v.push_back(number);


    }
    auto maxi = max_element(v.begin(),v.end());
    int largest = *maxi;
    cout << largest <<endl;

}