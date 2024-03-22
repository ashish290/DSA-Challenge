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
    bool isPalindrome(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        int n = 0;
        while(fast->next != NULL && fast->next->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
            n++;
        }
        ListNode* temp = slow->next;
        ListNode* prev = NULL;
        while(temp != NULL) {
            ListNode* forward = temp->next;
            temp->next = prev;
            prev = temp;
            temp = forward;
        }
        ListNode* curr = head;
        while(prev != NULL) {
            if(prev->val != curr->val) {
                return false;
            }
            prev = prev->next;
            curr = curr->next;
        }
        return true;
    }
};