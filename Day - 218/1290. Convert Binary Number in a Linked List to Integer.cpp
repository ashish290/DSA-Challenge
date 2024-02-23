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
//  Loop	Character	Operation	  Result
// 1	    ‘1’	        1	          1
// 2	    ‘0’	        (1x2) + 0	  2
// 3	    ‘1’	        (2x2) + 1	  5
class Solution {
public:
    int getDecimalValue(ListNode* head) {
        int result = 0;
        while(head != NULL) {
            result = result * 2 + head->val;
            head = head->next;
        }
        return result;
    }
};