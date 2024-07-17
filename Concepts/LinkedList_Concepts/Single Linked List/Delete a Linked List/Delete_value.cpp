#include <iostream>
#include <vector>

using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int data1, Node* next1 = nullptr) {
        data = data1;
        next = next1;
    }
};

Node* removeel(Node* head, int el) {
    if (head == NULL) 
        return head;

    // Handle the case where the head node needs to be removed
    if (head->data == el) {
        Node* temp = head;
        head = head->next;
        delete temp;
        return head;
    }

    Node* temp = head;
    Node* prev = NULL;

    // Iterate through the list to find the node to remove
    while (temp != NULL) {
        if (temp->data == el) {
            prev->next = temp->next;
            delete temp;
            return head;
        }
        prev = temp;
        temp = temp->next;
    }

    // If the element is not found, return the original head
    return head;
};

Node* convertArr2LL(const vector<int>& arr) {
    if (arr.empty()) 
        return nullptr;

    Node* head = new Node(arr[0]);
    Node* mover = head;

    for (size_t i = 1; i < arr.size(); i++) {
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }

    return head;
}

void print(Node* head) {
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    vector<int> arr = {6, 7, 8, 9, 4, 3, 2, 3, 4, 5, 5, 4, 2, 2, 34, 4};
    Node* head = convertArr2LL(arr);
    
    head = removeel(head, 9);
    print(head);

    // Free remaining nodes to avoid memory leaks
    while (head != NULL) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }

    return 0;
}
