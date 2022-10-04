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
            
    int sumNumbers(TreeNode* root) {
        
        //base case 1
        if(!root)
            return 0;
        
        //call the helper function with initial value of sum=0 & return its output
        return helper(root, 0);
    }
    
    int helper(TreeNode* node, int sum){
      
        //base case 2
        if(!node)
            return 0;
        
        //update the sum by multiplying the old one by 10 & add the current node value
        sum=sum*10+node->val;
        
        //base case 3
        if(!node->left && !node->right)
            return sum;
        
        //recursively, call the helper function either with the left or right nodes & return the final value
        return helper(node->left, sum) + helper(node->right, sum);
        
    }
};

