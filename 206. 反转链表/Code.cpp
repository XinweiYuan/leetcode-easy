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
    ListNode* newHead = nullptr;
    ListNode* reverseList(ListNode* head) {
        if (!head) 
            return head;

        stack<int> stk;
        auto h1 = head;
        auto h2 = head;
  
        while (head != nullptr) {
            stk.push(head->val);
            head = head->next;
        }
        while (!stk.empty()) {
            h1->val = stk.top();
            stk.pop();
            h1 = h1->next;
            
        }
        return h2;
    }
};
