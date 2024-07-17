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
void print(Node* head){
    while(head!=NULL){
        cout << head->data <<" ";
        head = head->next;
        
    }
    cout <<endl;
}
Node* inserthead(Node* head,int val){
    Node* temp = new Node(val,head);
    return temp;
}

Node* insertatposition(Node* head, int el,int k){
    if(head == NULL){
        if(k==1)
        {
            return new Node(el);
        }
        else{
            return head;
        }
    }
    if(k == 1){
        return new Node(el,head);
    }
    int cnt =0;
    Node* temp = head;
    while(temp!=NULL){
        cnt++;
        if(cnt == (k-1)){
            Node* x = new Node(el,temp->next);
            temp->next = x;
            break;
        }
        temp = temp->next;
    }
    return head;
}
int main()
{
   vector<int> arr = {2,3,4,5,6,8,6,45,34,3,54,3,3,54,4,44};
   Node* head =  convertArr2LL(arr);
   head = insertatposition(head,9,4);
   print(head);
}