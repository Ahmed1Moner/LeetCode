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
    TreeNode* searchBST(TreeNode* root, int val) {
        //if it's an empty tree-> return null
        if(!root)
            return NULL;
        //base case-> reach the desired element, return it
        else if(root->val == val)
            return root;
        //if the desired element smaller than the current node, search in its left
        else if(val < root->val)
            return searchBST(root->left, val);
        //if the desired element bigger than the current node, search in its right
        else
            return searchBST(root->right, val);
    }
};