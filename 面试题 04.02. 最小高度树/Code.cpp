/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    

    TreeNode* sortedArrayToBST(vector<int>& nums) {
        if (nums.size()==0){
            return NULL;
        }
        int mid = nums.size() / 2;
        TreeNode* root = new TreeNode(nums[mid]);
        vector<int> lefnums;
        vector<int> rignums;
        for (int i = 0; i < mid; ++i) {
            lefnums.push_back(nums[i]);
        }
        for (int i = mid+1; i < nums.size(); ++i) {
            rignums.push_back(nums[i]);
        }
        root->left = sortedArrayToBST(lefnums);
        root->right = sortedArrayToBST(rignums);
        return root;
    }
};
