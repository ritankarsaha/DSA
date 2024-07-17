/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* collison(ListNode* t1, ListNode* t2, int n) {
    
        while (n != 0) {
            n--;
            t1 = t1->next;
        }
       
        while (t1 != t2) {
            t1 = t1->next;
            t2 = t2->next;
        }
        return t1; 
    }

    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if (headA == NULL || headB == NULL) return NULL;

        ListNode* t1 = headA;
        ListNode* t2 = headB;
        int n1 = 0, n2 = 0;

       
        while (t1 != NULL) {
            n1++;
            t1 = t1->next;
        }

        
        while (t2 != NULL) {
            n2++;
            t2 = t2->next;
        }

        
        t1 = headA;
        t2 = headB;

    
        if (n1 > n2) {
            return collison(t1, t2, n1 - n2);
        } else {
            return collison(t2, t1, n2 - n1);
        }
    }
};