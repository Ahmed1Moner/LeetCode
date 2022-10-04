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
    
    //initialize two variables, one to store the correct node value & one to compare nodes to get the max one
    int value=0, max=INT_MIN;
    
    
    int findBottomLeftValue(TreeNode* root) {
        
        //base case 1
        if(!root)
            return -1;
        
        //recursively, call the helper function with intial value of level counter=0
        helper(root, 0);
        
        //return the final valid value
        return value;
    }
    
    void helper(TreeNode* node, int counter){
         
        //check if we're in the maximum deapth/level in the tree
        if(counter>max){
            //if yes-> save the max level until now
            max=counter;
            //save the current node value
            value=node->val;
        }
        
        //if the current node have a left node
        if(node->left)
            //recursively, call the helper function with its left nodes, add the level counter by one
            helper(node->left, counter+1);
        
        //if the current node have a right node
        if(node->right)
            //recursively, call the helper function with its right nodes, add the level counter by one
            helper(node->right, counter+1);
    }
    
};