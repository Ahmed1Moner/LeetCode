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
    
    void helper(TreeNode* root, vector<string>& ans, string curr){
        
        //empty tree
        if(!root)
            return;
        
        //if the current node has either left or right nodes, not a leaf node
        if(root->left || root->right)
            //add its value as a string & concatinate with the arrow symbol
            curr+=to_string(root->val)+="->";

        //if a leaf node
        else{
            //add without concatination
            curr+=to_string(root->val);
            //& push to the answer vector
            ans.push_back(curr);
        }
        
        //recursivelly, call the current root node with its left and its right nodes or sub-tree
        helper(root->left, ans, curr);
        helper(root->right, ans, curr);
        
    }
    
    vector<string> binaryTreePaths(TreeNode* root) {
        
        //initialize a vector of string
        vector<string> ans;
        //current string
        string curr="";
        
        //call the helper function
        helper(root, ans, curr);
        //return the final vector content
        return ans;
        
    }
};