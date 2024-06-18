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

Node* deleteTail(Node* head){
  if(head == NULL || head->next == NULL)
  return NULL;

  Node* tail  =  head;
  while(tail->next !=NULL)
  {
    tail = tail->next;
  }
  Node* newtail =  tail->back;
  
  newtail->next = nullptr;
  tail->back = nullptr;
  delete(tail);
  return head;


}
Node* deletehead(Node* head){
    if(head == NULL || head->next == NULL)
    return NULL;

    Node* prev = head;
    head = head->next;
    head->back = nullptr;
    prev->next = nullptr;
    delete (prev);
    return head;
}

Node* deletek(Node* head, int k){
    Node* temp = head;
    int cnt =0;
    while(temp!=NULL){
        cnt++;
        if(cnt == k)
        break;
        temp = temp->next;
    }

    Node* prev = temp->back;
    Node*front = temp->next;

    if(prev == NULL && front == NULL)
    {
        delete(temp);
        return NULL;
    }
    else if(prev == NULL)
    {
        head = deletehead(head);
        return head;
    }
    else if(front == NULL){
        head = deleteTail(head);
        return head;
    }

    prev->next = front;
    front->back = prev;
    temp->back = nullptr;
    temp->next = nullptr;
    delete(temp);
    return head;
}

int main()
{
    vector<int> arr = {1,2,3,4,5,6,7,8,9,344,4,4,3,2,3,3,2,1,3,22,3,2,2,3,2,2,};
    Node* head = convertarr2dll(arr);
    head= deletek(head,1);
    print(head);
    cout << endl;
}