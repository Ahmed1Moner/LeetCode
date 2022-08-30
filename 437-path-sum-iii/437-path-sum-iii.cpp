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
    
    //initialize a counter to the number of paths
    int counter=0;
    
    
    int pathSum(TreeNode* root, long int targetSum) {
        
        //if there's no tree-> return 0
        if(!root)
            return 0;
        
        /*
        we need to apply the helper function on each child node of the whole tree-> so we're calling the helper each time we're calling the left and the right nodes of the main function
        [1,null,2,null,3,null,4,null,5], 3
        in this test case, there're 2 valid solutions-> 1+2 & 3
        */
        
        //call the helper function with the main root
        helper(root, targetSum);
        //call the main function with the left nodes of the main root
        pathSum(root->left, targetSum);
        //call the main function with the right nodes of the main root
        pathSum(root->right, targetSum);
        
        //return the number of the valid paths
        return counter;
    }
    
    void helper(TreeNode *root, long int targetSum){
        
        //if there's no tree-> return 0
        if(!root)
            return;
        
        //update the sum with the difference with the node value
        targetSum-=root->val;
        
        //check if the updated value reaches zeor-> a valid path
        if(targetSum==0)
            counter++;
        
        //recursively, call the left nodes of the current one
        helper(root->left, targetSum);
        //recursively, call the right nodes of the current one
        helper(root->right, targetSum);
        
    }
};