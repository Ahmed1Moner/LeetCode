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
    int minDepth(TreeNode* root) {
        
        //base case: if there isn't tree || reaches a leaf node-> return 0
        if(!root)
            return 0;
      
        //initialize two counters, one on the left subtree & one on the right one, each one call the function again recursively
        int leftCounter=minDepth(root->left);
        int rightCounter=minDepth(root->right);

        //case 1: if there's no left subtree nodes-> return the right counter only + the root 
        if(leftCounter==0)
            return 1+rightCounter;
        
        //case 2: if there's no right subtree nodes-> return the left counter only + the root 
        else if(rightCounter==0)
            return 1+leftCounter;
        
        //case 3: if there're both left and right subtree nodes-> get the minimum value of them 
        else
            return 1+min(leftCounter, rightCounter);
        
    }
};