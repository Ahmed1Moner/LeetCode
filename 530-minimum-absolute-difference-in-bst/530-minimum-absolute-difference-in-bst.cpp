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
    
    void helper(TreeNode* root, vector<int> &res){
        
        //base case 1
        if(!root)
            return;
        
        //in-order tree traversal
        
        if(root->left)
            helper(root->left, res);
        
        res.push_back(root->val);
        
        if(root->right)
            helper(root->right, res);
    }
    
    
    int getMinimumDifference(TreeNode* root) {
        
        int diff=INT_MAX;
        vector<int> res;
        
        //recursively, call the helper function to traverse the tree inorder
        helper(root, res);
        
        //then, loop over the whole array elements
        for(int i=0;i<res.size()-1;i++)
            //compate & update the difference value with the minimum between the old one & the diff between the current two ones
            diff=min(diff, res[i+1]-res[i]);
        
        
        //return the minimum possible difference value
        return diff;
    }
};