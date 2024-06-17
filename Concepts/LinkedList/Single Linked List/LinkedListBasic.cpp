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

class Node{
    public:
    int data;
    Node* next;

    public:
    Node(int data1, Node* next1){
        data = data1;
        next = next1;
    }
    public:
    Node(int data1)
    {
        data = data1;
        next = nullptr;
    }


};
int main()
{
   vector<int>arr = {2,34,45,6,78,8,6,65,4};
   Node* y = new Node(arr[2]);
   cout << y->data <<endl; 
}