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
    Node(int data1){
        data = data1;
        next = nullptr;
    }
};

Node* convertArr2LL(vector<int> &arr){
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for(int i=1;i<arr.size();i++){
        Node* temp = new Node(arr[i]); 
        mover->next = temp;
        mover = temp;

    }
    return head;
}
int lenghtofll(Node* head){
    int cnt =0;
    Node* temp = head;
    while(temp){
    cnt++;
    temp = temp->next;
    
  }
  return cnt;
}

int main()
{
  vector<int> arr = {12,3,5,6,7,8,85,4,3,123,4,5,643,45,3,3};
  Node* head = convertArr2LL(arr);
  Node* temp = head;
  cout << lenghtofll( head) <<endl;

}