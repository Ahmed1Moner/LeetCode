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
    int findBottomLeftValue(TreeNode* root) {
        
        //initialize a queue & add the whole tree in it
        queue<TreeNode*> q;
        q.push(root);
        
        //loop until the queue gets empty
        while(!q.empty()){
            
            //save the current queue element's value
            root=q.front();
            //remove the current element
            q.pop();
            
            //if the current node have a right node
            if(root->right)
                //add it to the queue
                q.push(root->right);
            
            //if the current node have a left node
            if(root->left)
                //add it to the queue
                q.push(root->left);
        }
        
        //after that, i just need the last node value in the whole tree
        return root->val;
    }
};