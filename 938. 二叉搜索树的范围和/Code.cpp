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
    int rangeSumBST(TreeNode* root, int low, int high) {
        if (!root){
            return 0;
        }
        int rlt(0);
        if (root->val >= low && root->val <= high){
            rlt += root->val;
        }
        rlt+=rangeSumBST(root->left, low, high);
        rlt += rangeSumBST(root->right, low, high);
        return rlt;

    }
};
