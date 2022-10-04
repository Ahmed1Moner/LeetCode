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
    int deepestLeavesSum(TreeNode* root) {
        
        //initialize sum & maximum deapth variables, store in it the returned value from the helper function 1 
        int sum=0;
        int maxDepth=getDepth(root);
        
        //call the helper function 2 which updates the sum variable 
        dfs(root, sum, maxDepth, 1);
        
        //return the final sum value
        return sum;
        
    }
    
    //helper function 1 to get the depth of the tree
    int getDepth(TreeNode* root){
        
        //base case 1
        if(!root)
            return 0;
        
        //get the maximum possible depth in the tree
        return 1 + max(getDepth(root->left), getDepth(root->right));
    }
    
    //helper function 2 to traverse deapthly in the tree until the max deapth
    void dfs(TreeNode* root, int& sum, int& maxDepth, int currDepth){
        
        //base case 2
        if(!root)
            return;
        
        //base case 3: if the current deapth/iterator == the calculated maximum one
        if(currDepth == maxDepth){
            
            //add the node value to the sum variable
            sum+=root->val;
            return;
        }
        
        //recursively, move in the deapth of the current node either to the left or the right & add the current deapth by one
        dfs(root->left, sum, maxDepth, currDepth+1);
        dfs(root->right, sum, maxDepth, currDepth+1);
        
        return;
    }
};