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

class Node
{
   public:
   int data;
   Node* next;

   public:
   Node(int data1,Node* next1){
    data = data1;
    next = next1;

   }
   public:
   Node(int data1){
    data =  data1;
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
  cout << endl;
}

// Node* removefirsthead(Node* head){
//     if(head == NULL)
//     return head;
//     Node* temp = head;
//     head = head->next;
//     delete temp;
//     return head;
// }
Node* removeTail(Node* head){
  if(head == NULL || head->next == NULL)
  return NULL;
  Node* temp = head;
  while(temp->next->next != NULL){
    temp = temp->next;

  }
  delete temp->next;
  temp->next = nullptr;
  return head;

}
int main()
{
   vector<int> arr = {6,7,8,9,4,3,2,3,4,5,5,4,2,2,34,4};
   Node* head = convertArr2LL(arr);
   //head = removefirsthead(head);
    head = removeTail(head);
   print(head);
}