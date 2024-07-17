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

Node* removek(Node* head,int k){
  if(head == NULL)
  return NULL;
  if(k == 1){
    Node* temp = head;
    head = head->next;
    free(temp);
    return head;
  }
  int cnt =0 ;
  Node* temp = head;
  Node* prev = NULL;
  while(temp != NULL){
    cnt++;
    if(cnt == k){
        prev->next = prev->next->next;
        free(temp);
        break;
    }
    prev =  temp;
    temp = temp->next;
  }
  return head;
}

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

int main()
{
  vector<int> arr = {6,7,8,9,4,3,2,3,4,5,5,4,2,2,34,4};
   Node* head = convertArr2LL(arr);
   head = removek(head,4);
   print(head);
}