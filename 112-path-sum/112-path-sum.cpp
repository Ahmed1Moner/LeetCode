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
        
    bool hasPathSum(TreeNode* root, int targetSum) {
                
        //base case 1: if there isn't tree || reaches a leaf node-> false
        if(!root)
            return false;
        
        //base case 2: if it's a leaf node & the target-current node value = 0 -> true
        if(!root->left && !root->right && targetSum==root->val)
            return true;
        
        //initialize an updated variable with the difference between the target value and the current node one
        int diff=targetSum-root->val;

        //initialize two counters, one on the left subtree & one on the right one, each one call the function again recursively
        bool leftCoutner=hasPathSum(root->left, diff);
        bool rightCounter=hasPathSum(root->right, diff);
        
        //move either to the right or the left subtrees' nodes
        return leftCoutner || rightCounter;
        
    }
};