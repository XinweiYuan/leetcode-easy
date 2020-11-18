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
    vector<int> seq;
    void helper(TreeNode* root) {
        if (!root) {
            return;
        }
        seq.push_back(root->val);
        helper(root->left);
        helper(root->right);
    }
    int kthLargest(TreeNode* root, int k) {
        helper(root);
        sort(seq.begin(), seq.end());
        return seq[seq.size()-k];
    }
};
