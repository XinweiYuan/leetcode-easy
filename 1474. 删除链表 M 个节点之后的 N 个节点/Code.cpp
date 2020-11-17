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
    ListNode* deleteNodes(ListNode* head, int m, int n) {
        ListNode *rlt = new ListNode(0);
        auto tmp = rlt;
        bool flag = true;
        while(flag) {
            if (flag) {
                for (int i = 0; i < m; ++i) {
                if (head == nullptr) {
                    flag = false;
                    rlt->next = nullptr;
                    break;
                }
                    rlt->next = new ListNode(head->val);
                    head = head->next;
                    rlt = rlt->next;
                }
            }
            if (flag) {
                for (int i = 0; i < n; ++i) {
                    if (head == nullptr) {
                        rlt->next = nullptr;
                        flag = false;
                        break;
                    }
                    head = head->next;
                }
            }
        }
        return tmp->next;
    }
};
