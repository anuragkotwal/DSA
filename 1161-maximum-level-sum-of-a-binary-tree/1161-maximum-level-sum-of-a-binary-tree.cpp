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
    int maxLevelSum(TreeNode* root) {
        vector<int> ans;
        if(root==NULL)
            return 0;
        queue<TreeNode* > q;
        q.push(root);
        while(!q.empty())
        {
            int s=q.size();
            int sum=0;
            while(s--)
            {
                TreeNode* front=q.front();
                q.pop();
                sum+=front->val;
                if(front->left!=NULL)
                    q.push(front->left);
                if(front->right!=NULL)
                    q.push(front->right);
            }
            ans.push_back(sum);
        }
        
        return (max_element(ans.begin(), ans.end()) - ans.begin())+1;
    }
};