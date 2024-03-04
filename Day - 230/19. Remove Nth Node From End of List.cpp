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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(!head || !head->next) {
            return NULL;
        }
        int size = 0;
        ListNode* curr = head;
        while(curr != NULL) {
            size++;
            curr = curr->next;
        }
        size -= n;
        if(size == 0) {
            return head->next;
        }
        ListNode* temp = head;
        for(int i = 0; i < size-1; i++) {
            temp = temp->next;
        }
        ListNode* todelete = temp->next;
        temp->next = temp->next->next;
        delete todelete;
        return head;
    }
};