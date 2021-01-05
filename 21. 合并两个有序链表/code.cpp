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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        vector<int> nums;
        auto i = l1;
        while(i != nullptr) {
            nums.push_back(i->val);
            i = i->next;
        }
        i = l2;
        while(i != nullptr) {
            nums.push_back(i->val);
            i = i->next;
        }
        if (nums.size() == 0)
            return nullptr;
            
        sort(nums.begin(), nums.end());
        ListNode* head = new ListNode(0);
        auto iter = head;
        for (int i = 0; i < nums.size()-1; ++i) {
            iter->val = nums[i];
            iter->next = new ListNode;
            iter = iter->next;
        }
        iter->val = nums[nums.size()-1];
        // for (auto num : nums) {
        //     iter->val = num;
        //     iter->next = new ListNode;
        //     iter = iter->next;
        // }
        //delete iter;
        return head;
    }
};
