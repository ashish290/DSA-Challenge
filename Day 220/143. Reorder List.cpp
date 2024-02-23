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
    ListNode* middle(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast != NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }
    ListNode* reverse_elem(ListNode* head) {
        ListNode* prev = NULL;
        ListNode* curr = head;
        while(curr != NULL) {
            ListNode* forward = curr->next;
            curr->next = prev;
            prev = curr;
            curr = forward;
        }
        return prev;
    }
    void reorderList(ListNode* head) {
        ListNode* mid = middle(head);
        ListNode* rev_curr = reverse_elem(mid->next);
        mid->next = NULL;
        while(head && rev_curr) {
            ListNode* temp = head->next;
            ListNode* rev_ptr = rev_curr->next;
            head->next = rev_curr;
            head->next->next = temp;
            rev_curr = rev_ptr;
            head = temp;
        }
    }
};