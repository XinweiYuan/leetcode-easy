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
    ListNode* middleNode(ListNode* head) {
        auto tmp = head;
        int len = 0;
        while (tmp) {
            ++len;
            tmp = tmp->next;
        }
        len = len / 2;
        while (len != 0) {
            head = head->next;
            --len;
        }
        return head;
    }
};
