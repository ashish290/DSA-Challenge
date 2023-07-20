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
    int FindLength(ListNode *temp) {
        int cnt = 1;
        while(temp != NULL) {
            cnt++;
            temp = temp->next;
        }
        return cnt;
    }

    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int l1 = FindLength(headA);
        int l2 = FindLength(headB);
        int size = abs(l1-l2);
        
        if(l1 > l2) {
            for(int i = 1; i <= size; i++){
                headA = headA->next;
            }
        }
        else {
            for(int i = 1; i <= size; i++) {
                headB = headB->next;
            }
        }

        while(headA != NULL) {
            if(headA == headB) {
                return headA;
            }
            else {
                headA = headA->next;
                headB = headB->next;
            }
        }

        return NULL;
    }
};
