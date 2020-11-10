/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> rlt;
    void helper(TreeNode* node) {
        if (!node)
            return;
        if (node->left!=nullptr&&node->right==nullptr){
            rlt.push_back(node->left->val);
            
        }
        if (node->left==nullptr&&node->right!=nullptr){
            rlt.push_back(node->right->val);
            
        }
        helper(node->left);
        helper(node->right);

    }
    vector<int> getLonelyNodes(TreeNode* root) {
        helper(root);
        return rlt;
    }
};
