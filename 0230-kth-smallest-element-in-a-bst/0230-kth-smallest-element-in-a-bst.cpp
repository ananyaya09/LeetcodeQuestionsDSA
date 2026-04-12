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
    int kthSmallest(TreeNode* root, int k) {
        int cnt=0;
        return inOrder(root, k, cnt);
    }

    int inOrder(TreeNode* root, int k, int &cnt) {
        if (root == NULL)
            return -1;
        
        int left=inOrder(root->left, k, cnt);
        if (left != -1) return left; 
        cnt++;
        if (cnt == k)
            return root->val;
        return inOrder(root->right, k,cnt);
    }
};