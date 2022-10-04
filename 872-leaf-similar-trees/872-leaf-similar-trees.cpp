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
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        
        //base case 1
        if(!root1 || !root2)
            return false;
        
        //initialize two new vectors, each for every tree leaves
        vector<int> leave1, leave2;
        
        //recursively, call the helper function with the first & second tree nodes
        helper(root1, leave1);
        helper(root2, leave2);
        
        //check if the two vectors' values are equal
        return leave1==leave2;
        
    }
    
    void helper(TreeNode* node, vector<int>&leaves){
        
        //base case 2
        if(!node)
            return;
        
        //base case 3
        if(!node->left && !node->right)
            leaves.push_back(node->val);
        
        //recursively, call the current tree node with its left & right nodes
        helper(node->left, leaves);
        helper(node->right, leaves);
        
    }
};