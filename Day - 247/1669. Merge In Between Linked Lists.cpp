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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        int i = 0, j = 0;
        ListNode* temp_1 = list1;
        ListNode* temp_2 = list1;
        ListNode* temp_3 = list2;
        while(temp_1 != NULL && temp_2 != NULL) {
            if(i != a-1) {
                temp_1 = temp_1->next;
                i++;
            }
            if(j != b+1) {
                temp_2 = temp_2->next;
                j++;
            }
            else {
                break;
            }
        }
        while(temp_3->next != NULL) {
            temp_3 = temp_3->next;
        }
        temp_1->next = list2;
        temp_3->next = temp_2;
        return list1;
    }
};