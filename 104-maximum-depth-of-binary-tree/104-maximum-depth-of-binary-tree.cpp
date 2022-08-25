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
        
    int maxDepth(TreeNode* root) {
        
        //base case: if there isn't tree || reaches a leaf node-> return 0
        if(!root)
            return 0;
        
        //initialize two counters, one on the left subtree & one on the right one, each one call the function again recursively
        int leftCounter=maxDepth(root->left);
        int rightCounter=maxDepth(root->right);
        
        //recursive case: get the largest value of the two counters & add it by one
        return 1+max(leftCounter,rightCounter);        
    }
};