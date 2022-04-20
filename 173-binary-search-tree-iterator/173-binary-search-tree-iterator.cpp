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
class BSTIterator {
    private:
		std::stack<TreeNode*> stk;
public:
    BSTIterator(TreeNode* root) {
        TreeNode* cur = root;
		while(cur) {
			stk.push(cur);
			cur = cur->left;
		}
    }
    
    int next() {
        TreeNode* cur = stk.top();
		int res = cur->val;
		stk.pop();

		cur = cur->right;
		while(cur) {
			stk.push(cur);
			cur = cur->left;
		}
		return res;
    }
    
    bool hasNext() {
        return !stk.empty();
    }
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */