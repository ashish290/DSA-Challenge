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
    ListNode* removeZeroSumSublists(ListNode* head) {
        unordered_map<int,ListNode*>umap;
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        umap[0] = dummy;
        int sum = 0;
        while(head != NULL) {
            sum += head->val;
            if(umap.find(sum) != umap.end()) {
                ListNode* temp = umap[sum];
                ListNode* start = temp;
                int psum = sum;
                while(start != head) {
                    start = start->next;
                    psum += start->val;
                    if(start != head)
                    umap.erase(psum);
                }
                temp->next = start->next;
            }
            else {
                umap[sum] = head;
            }
            head = head->next;
        }
        return dummy->next;
    }
};