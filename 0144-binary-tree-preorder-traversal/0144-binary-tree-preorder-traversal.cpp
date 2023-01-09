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
    
    void helper(vector<int> &res, TreeNode* root){
        
        //base case-> if the tree's empty, return the empty vector
        if(!root)
            return;
        
        //push the current node value
        res.push_back(root->val);
        //call the fuction with its left sub-tree
        helper(res, root->left);
        //call the fuction with its right sub-tree
        helper(res, root->right);
        
    }
    
    
    vector<int> preorderTraversal(TreeNode* root) {
        
        //initialize a vector
        vector<int> res;
        //call the helper function
        helper(res, root);
        //return the vector elements
        return res;
    }
};