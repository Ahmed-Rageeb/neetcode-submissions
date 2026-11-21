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
    bool visit(TreeNode* root, TreeNode* subRoot) {
        if(root == NULL && subRoot == NULL) return true;
        if(root == NULL || subRoot == NULL) return false;

        if(root->val != subRoot->val) return false;

        return visit(root->left, subRoot->left) &&
               visit(root->right, subRoot->right);
    }

    bool find(TreeNode* root, TreeNode* subRoot) {
        if(root == NULL) return false;

        // Check whether the current node is the subtree root
        if(visit(root, subRoot)) return true;

        // If not, search both sides
        return find(root->left, subRoot) ||
               find(root->right, subRoot);
    }

    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(subRoot == NULL) return true;
        return find(root, subRoot);
    }
};