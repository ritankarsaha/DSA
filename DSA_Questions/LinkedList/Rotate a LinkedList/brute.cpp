/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* findnewhead(ListNode* temp , int k){
        int cnt = 1;
        while(temp != NULL){
            if (cnt == k)
                return temp;
            cnt++;
            temp = temp->next;
        }
        return temp;
    }
    
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == NULL || k == 0)
            return head;  
      
        ListNode* tail = head;
        int cnt = 1;  
        while(tail->next != NULL) {
            cnt++;
            tail = tail->next;
        }

        
        k = k % cnt;
        if(k == 0)
            return head;

      
        tail->next = head;

       
        ListNode* newTail = findnewhead(head, cnt - k);
        ListNode* newHead = newTail->next;
        newTail->next = NULL;

        return newHead;
    }
};
