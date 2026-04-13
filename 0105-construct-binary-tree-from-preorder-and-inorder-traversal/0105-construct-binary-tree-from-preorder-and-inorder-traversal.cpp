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
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {

        map<int,int> inMap;

        for(int i=0; i<inorder.size(); i++)
            inMap[inorder[i]] = i;
        
        
        TreeNode* root=BT(preorder, 0, preorder.size()-1, inorder, 0, inorder.size()-1 , inMap);

        return root;
    }

    TreeNode* BT(vector<int>& preorder,int pS, int pE, vector<int>& inorder, int iS, int iE, map<int,int>& inMap){

        if( pS>pE || iS> iE) return NULL;

        TreeNode* root = new TreeNode(preorder[pS]);
        int inroot = inMap[root-> val];
        int numsLeft = inroot- iS;

        root->left=   BT(preorder, pS+1,               pS+numsLeft,
                        inorder,    iS,                inroot-1 ,        inMap);
        root->right=  BT(preorder, pS+1+  numsLeft,    pE, 
                        inorder,    inroot+1,           iE ,             inMap);

        return root;
    }
};