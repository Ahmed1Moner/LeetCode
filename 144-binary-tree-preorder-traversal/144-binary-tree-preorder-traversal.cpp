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
    //initialize a new empty vector with name result
    vector<int> res={};
    
    vector<int> preorderTraversal(TreeNode* root) {
        
        //base case-> if the tree's empty, return the empty vector
        if(!root){return res;}
        
        //recursive cases-> call the fuction with its left sub-tree
        res.push_back(root->val);
        //push the root node value
        preorderTraversal(root->left);
        //recursive cases-> call the fuction with its right sub-tree
        preorderTraversal(root->right);
    
        //return the vector elements
        return res;
    }
};