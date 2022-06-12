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
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        //base case-> if it reaches the desired position, create a new node with the given data
        if(!root){
            return new TreeNode(val);
        }
        //if the given element is smaller than the current node-> ignore the values bigger than it
        //recursivelly, search in the first smaller elements
        if(val < root->val){
            root->left=insertIntoBST(root->left, val);
        }
        //same algorithm as the above one
        else if(val > root->val){
            root->right=insertIntoBST(root->right, val);
        }
        //return the whole subtree
        return root;
    }
};