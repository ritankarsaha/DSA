class Solution {
public:
    // Function to sort a linked list of 0s, 1s, and 2s.
    Node* segregate(Node *head) {
        if (head == NULL || head->next == NULL)
            return head;

        // Create dummy nodes for 0s, 1s, and 2s lists.
        Node* zerohead = new Node(-1);
        Node* onehead = new Node(-1);
        Node* twohead = new Node(-1);
        
        // Pointers to current position in 0s, 1s, and 2s lists.
        Node* zero = zerohead;
        Node* one = onehead;
        Node* two = twohead;
        
        // Traverse the original list and link nodes to the appropriate lists.
        Node* temp = head;
        while (temp != NULL) {
            if (temp->data == 0) {
                zero->next = temp; // Attach node to 0s list
                zero = zero->next; // Move zero pointer to next node
            } else if (temp->data == 1) {
                one->next = temp; // Attach node to 1s list
                one = one->next; // Move one pointer to next node
            } else if (temp->data == 2) {
                two->next = temp; // Attach node to 2s list
                two = two->next; // Move two pointer to next node
            }
            temp = temp->next; // Move to the next node in the original list
        }
        
        // Combine the lists.
        zero->next = (onehead->next != NULL) ? onehead->next : twohead->next;
        one->next = twohead->next;
        two->next = NULL;
        
        // Get the new head and delete dummy nodes.
        Node* newhead = zerohead->next;
        delete zerohead;
        delete onehead;
        delete twohead;
        
        return newhead;
    }
};
