/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    int goodNodes(TreeNode* root) {

        int cnt = 0;
        cntGN(root, cnt, root->val);
        return cnt;
    }

    void cntGN(TreeNode* root, int& cnt, int max_at_this_step) {
        if (root == NULL)
            return;

        // if it is a good node:
        if (root->val >= max_at_this_step) {
            max_at_this_step = root->val;
            cnt++;
        }

        // GN nhi hai toh, aage badho
        cntGN(root->left, cnt, max_at_this_step);
        cntGN(root->right, cnt, max_at_this_step);
    }
};