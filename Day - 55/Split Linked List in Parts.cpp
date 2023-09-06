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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        ListNode* count = head;
        int size = 0;
        while(count != NULL) {
            size++;
            count = count->next;
        }
        vector<ListNode*>temp(k,NULL);
        int que = size / k;
        int rem = size % k;
        ListNode* curr = head;
        ListNode* prev = NULL;
        for(int i = 0; i < k; i++) {
        temp[i] = curr;
        for(int j = 1; j <= que+(rem > 0 ?1:0); j++) {
            prev = curr;
            curr = curr->next;
        }
          if(prev != NULL)
            prev->next = NULL;
            rem--;
        }
        return temp;
    }
};