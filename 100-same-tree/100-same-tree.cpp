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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        
        //if the two trees are null-> return true
        if(!p && !q)
            return true;
        
        //if one of them is null-> return false
        else if(!p || !q)
            return false;
        
        //base case: if the value of each pointer aren't the same-> return false
        if(p->val != q->val)
            return false;
        
        //return if the two right values are equals && the two left ones are the same
        return (isSameTree(p->right, q->right) && isSameTree(p->left, q->left));
    }
};