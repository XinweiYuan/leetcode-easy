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
    vector<int> reversePrint(ListNode* head) {
        vector<int> rlt;
        while (head != nullptr) {
            rlt.insert(rlt.begin(), head->val);
            head = head->next;
        }
        return rlt;
    }
};
