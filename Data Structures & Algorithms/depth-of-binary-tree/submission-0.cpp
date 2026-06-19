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
    int visit(TreeNode* root,int count)
    {
        if(root==NULL)
        {
            return count;
        }
        int left=visit(root->left,count+1);
        int right=visit(root->right,count+1);
        return max(left,right);
    }
    int maxDepth(TreeNode* root) {
        return visit(root,0);
    }
};
