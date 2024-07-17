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
    ListNode* middleNode(ListNode* head) {
        ListNode* temp = head;
        if(head == NULL || head->next == NULL)
        return head;
        int cnt =0;
        while(temp!=NULL)
        {
           cnt++;
           temp = temp->next;
        }
        int mid = (cnt/2) + 1;
        ListNode* temp1 = head;
        while(temp1!=NULL){
            mid-=1;
            if(mid == 0)
            break;
            temp1 = temp1->next;
        }
        return temp1;
    }
};