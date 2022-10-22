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
    
    //helper function to binary search / divide and conquer
    TreeNode* helper(vector<int>& nums, int left, int right){
        
        //base case: if the left is after the right pointer
        if(left>right)
            //NULL node
            return NULL;
        
        //root of the tree-> middle element
        int mid=left+(right-left)/2;
        TreeNode *root=new TreeNode(nums[mid]);
        
        //left sub-tree-> part before middle
        root->left=helper(nums, left, mid-1);
        //right sub-tree-> part before middle
        root->right=helper(nums, mid+1, right);
        
        //return the tree
        return root;
    }
    
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        
        //call the helper function from its start to the end
        return helper(nums, 0, nums.size()-1);   
    }
    
};