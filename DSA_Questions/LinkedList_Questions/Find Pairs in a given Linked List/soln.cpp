class Solution
{
public:
    Node* findTail(Node* head){
        Node* temp = head;
        while(temp->next != NULL){
            temp = temp->next;
        }
        return temp;
    }

    vector<pair<int, int>> findPairsWithGivenSum(Node *head, int target)
    {
        vector<pair<int , int>> ans;
        if(head == NULL)
            return ans;

        Node* right = findTail(head);
        Node* left = head;

        while(left != NULL && right != NULL && left != right && left->prev != right){
            if(left->data + right->data == target){
                ans.push_back({left->data , right->data});
                left = left->next;
                right = right->prev;
            }
            else if(left->data + right->data < target){
                left = left->next;
            }
            else{
                right = right->prev;
            }
        }
        return ans;
    }
};