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
    
    int dia=0;
    
    int diameterOfBinaryTree(TreeNode* root) {
        
        //base case 1:
        if(!root)
            return 0;
        
        //recursively, call the helper function with the root
        helper(root);
        
        //return the diameter value
        return dia;
    }
    
    int helper(TreeNode* node){
        
        //base case 2
        if(!node)
            return 0;
        
        //initialize two pointers, left & right ones
        int leftNode=helper(node->left);
        int rightNode=helper(node->right);
        
        //updated diameter value is the max path between two nodes-> path between two leaves
        dia=max(dia, leftNode+rightNode);
        
        //for each node-> add the diameter by one, as you pass an edge
        return 1+max(leftNode, rightNode);
    }
};