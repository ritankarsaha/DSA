/* 
The brute method solution is to use the stack data structure, after that while iterating through it, empty the first eleemnt and replace it with the respective back element.\

*/

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
    Node* back;

    public:
    Node(int data1,Node* next1,Node* back1){
        data = data1;
        next = next1;
        back = back1;
    }
    public:
    Node(int data1){
        data = data1;
        next = nullptr;
        back = nullptr;
    }
    
};
Node* convertarr2dll(vector<int> &arr){
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for(int i=1;i<arr.size();i++){
        Node* temp = new Node(arr[i],nullptr,mover);
        mover->next = temp;
        mover = temp;
    }
    return head;
}
Node* print(Node* head){
    while(head!=NULL){
        cout << head->data << " ";
        head = head->next;
    }
    return head;
}
Node* reverseddll (Node* head){
    if(head == NULL || head->next == NULL){
        return head;
    }
    Node* prev = NULL;
    Node* current = head;
    while(current != NULL){
        prev = current->back;
        current->back = current->next;
        current->next = prev;

        current = current->back;

    }
    return prev->back;
  

}

int main()
{
   vector<int> arr = {2,3,4,44,3,2,2,3,3,4,33,3,4,3,5,5,4,3,3,2,123,34,3,2,2,3,43,32};
   Node* head = convertarr2dll(arr);
   head = reverseddll(head);
   print(head);
}