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
    ListNode* getKthFromEnd(ListNode* head, int k) {
        int len(0);
        auto headTmp = head;
        while(headTmp) {
            ++len;
            headTmp = headTmp->next;
        }
        len = len - k;
        while(len != 0) {
            head = head->next;
            --len;
        }
        return head;
    }
};
