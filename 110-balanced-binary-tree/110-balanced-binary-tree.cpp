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
    
    //initialize a boolean flag with true
    bool check=true;
    
    int checkTree(TreeNode *tree){
        
        //base case 1: if it's an empty tree-> balanced
        if(!tree)
            return true;
        
        //base case 2: if the flag is off-> imbalanced
        if(!check)
            return false;
        
        //initialize two counters, one on the left subtree & one on the right one, each one call the function again recursively
        int leftCounter=checkTree(tree->left);
        int rightCounter=checkTree(tree->right);
        
        //base case 3: if the difference between the two counters is more than 1-> imbalanced
        if(abs(leftCounter-rightCounter)>1)
            check=false;
        
        //recursive case: get the largest value of the two counters & add it by one
        return 1 + max(leftCounter,rightCounter);
    }
    
    
    bool isBalanced(TreeNode* root) {
        
        //initialize a temp variable to call the second function with it
        int temp=checkTree(root);
        //return the value of the flag, balanced or not
        return check;
    }
};