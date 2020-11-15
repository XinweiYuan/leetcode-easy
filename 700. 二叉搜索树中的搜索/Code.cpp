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
    TreeNode* rlt = nullptr;
    void helper(TreeNode* root, int val){
        if(!root)
            return;
        if(root->val==val)
            rlt = root;
        helper(root->left, val);
        helper(root->right, val);
    }
    TreeNode* searchBST(TreeNode* root, int val) {
        helper(root, val);
        return rlt;
    }
};
