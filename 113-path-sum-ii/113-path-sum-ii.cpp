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
    
    //initialize a temporary vector to store the current path elements & a final result one to store all paths
    vector<int> temp;
    vector<vector<int>> res;    
    
    void helper(TreeNode *root, int sum, int targetSum){
        
        //base case: if there's no tree-> return an empty vector
        if(!root)
            return;
        
        //store the main root node value
        temp.push_back(root->val);
        
        //update the current sum value with each function call
        sum+=root->val;
        
        //check if the current node is a leaf one
        if(!root->left && !root->right){
            //if yes-> check if the current sum equals the target one or not
            if(targetSum==sum)
                //if yes-> store that correct path to the result vector
                res.push_back(temp);   
            //if no-> ignore that path
        }
        
        //if no, not a leaf node-> recursively call the function with the left and the right nodes of the current one
        else{
            helper(root->left, sum, targetSum);
            helper(root->right, sum, targetSum);
        }
        
        //move a backward step to avoid storing every element while getting the true path
        temp.pop_back();
    
    }
        
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        
        //calling the helper function
        helper(root, 0, targetSum);
        //return the final result vectore of all paths
        return res;
    }
};