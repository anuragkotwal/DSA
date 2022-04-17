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
    
    void Inorder(TreeNode* root, TreeNode*& prev){
        if(root==NULL) return ;
        Inorder(root->left,prev);
        prev->left=NULL;
        prev->right=root;
        prev=root;
        Inorder(root->right,prev);
    }
    
    TreeNode* increasingBST(TreeNode* root) {
        TreeNode* dummy = new TreeNode(-1);
        TreeNode* prev=dummy;
        Inorder(root,prev);
        prev->left=NULL;
        prev->right=NULL;
        TreeNode* res=dummy->right;
        delete dummy;
        return res;
    }
};