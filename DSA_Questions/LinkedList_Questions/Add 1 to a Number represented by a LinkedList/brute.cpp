class Solution
{
    public:
     Node* reverseList(Node* head) {
        Node* temp = head;
        stack<int> st;
        while(temp!=NULL)
        {
            st.push(temp->data);
            temp = temp->next;
        }
        Node* temp1 = head;
        while(temp1!=NULL){
            temp1->data = st.top();
            st.pop();
            temp1 = temp1->next;
        }
        return head;
    }
    Node* addOne(Node *head) 
    {
        head = reverseList(head);
        Node* temp = head;
        int carry = 1;
        while(temp!=NULL){
            temp->data = temp->data + carry;
            if(temp->data < 10){
                carry = 0;
                break;
            }
            else{
                temp->data = 0;
                carry =1;
                
            }
            temp = temp->next;
        }
        if (carry == 1)
        {
            Node* newNode = new Node(1);
            head = reverseList(head);
            newNode->next = head;
            return newNode;
        }
        else{
            reverseList(head);
            return head;
        }
        
    }
};