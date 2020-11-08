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
    int getDecimalValue(ListNode* head) {
        vector<int> digits;
        int rlt(0);
        int len(0);
        while(true) {
            digits.push_back(head->val);
            ++len;
            if(head->next == NULL) {
                break;
            }
            head = head->next;
            
        }
        for (auto i : digits) {
            rlt += i* (pow(2, len-1));
            --len;
        }
        return rlt;


    }
};
