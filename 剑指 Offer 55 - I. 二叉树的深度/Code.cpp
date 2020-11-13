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
    int maxDepth(TreeNode* root) {
        if (!root)
            return 0;
        int t(1);
        int depthl = maxDepth(root->left);
        int depthr = maxDepth(root->right);
        return (depthl > depthr) ? depthl+t : depthr+t;
    }
};
