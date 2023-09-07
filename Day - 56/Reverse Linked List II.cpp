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
    ListNode* reverse(ListNode* newhead,ListNode* dummy){
       ListNode* prev = dummy;
       dummy->next = newhead;
       ListNode* curr = prev->next;
       while(curr != NULL){
           ListNode* forward = curr->next;
           curr->next = prev;
           prev = curr;
           curr = forward;
       }
        return prev;
    }
    
    ListNode* reverseBetween(ListNode* head, int left, int right) {
         ListNode* dummy = new ListNode(-1);
        dummy->next = head;
        ListNode* prev = dummy;
        for(int i = 0; i < left-1; i++){
            prev = prev->next;
        }
        ListNode* curr = prev->next;
        for(int i = 0; i < right-left; i++){
            ListNode* temp = prev->next;
            prev->next = curr->next;
            curr->next = curr->next->next;
            prev->next->next = temp;
        }
       return dummy->next;
    }
};