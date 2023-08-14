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
    ListNode* reverseNode(ListNode* head) {
    ListNode * prev=NULL;
        ListNode * forw=NULL;
        ListNode * curr=head;
        while(curr!=NULL){
            forw=curr->next;
            curr->next=prev;
            prev=curr;
            curr=forw;
        }
        return prev;
}

    ListNode* doubleIt(ListNode* head) {
       ListNode* dummy = reverseNode(head);
       ListNode* temp = dummy;
       ListNode* ptr = temp;
       int carry = 0;
       int prod = 0;
       while(temp != NULL) {
           prod = temp->val * 2 + carry;  
           carry = prod/10;
           prod %= 10;
           temp->val = prod;
           ptr = temp;
           temp = temp->next;
       }
       if (carry) {
           ptr->next = new ListNode(carry);
       }
       ListNode* ans = reverseNode(dummy);
       return ans;
    }
};