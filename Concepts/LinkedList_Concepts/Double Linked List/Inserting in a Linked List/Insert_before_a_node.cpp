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
    Node(int data1,Node*next1,Node*back1){
        data = data1;
        next = next1;
        back = back1;

    }
    public:
    Node(int data1){
        data= data1;
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
Node* print(Node*head){
    while(head!=NULL){
        cout << head->data << " ";
        head = head->next;
    }
    return  head;
}

Node* insertbeforehead(Node* head, int val){
    Node* newhead = new Node(val,head,nullptr);
    head->back = newhead;
    return newhead;
}

Node* insertbeforetail(Node* head,int val){
    if(head->next == NULL)
    {
        return insertbeforehead(head,val);
    }
    Node* tail = head;
    while(tail->next !=NULL){
         tail = tail->next;
    }
    Node* prev = tail->back;
    Node* newNode = new Node(val,tail,prev);
    prev->next = newNode;
    tail->back = newNode;

    return head;
}

Node* insertbeforekthelement(Node* head, int k, int val){
    if(k ==1){
        return insertbeforehead(head,val);
    }
    Node* temp = head;
    int cnt =0;
    while(temp != NULL){
        cnt++;
        if(cnt == k)
        break;
        temp = temp->next;
    }
    Node* prev = temp->back;
    Node* newNode = new Node(val,temp,prev);
    prev->next = newNode;
    temp->back = newNode;

    return head;
}

void insertbeforeNode(Node* node, int val){
    Node* prev = node->back;
    Node* newNode = new Node(val,node,prev);
    prev->next = newNode;
    node->back = newNode;


}

int main()
{
    vector<int> arr = {1,2,3,4,5,6,7,8,9,344,4,4,3,2,3,3,2,1,3,22,3,2,2,3,2,2,};
    Node* head = convertarr2dll(arr);
   insertbeforeNode(head->next->next,1000);
    print(head);
    cout << endl;
}