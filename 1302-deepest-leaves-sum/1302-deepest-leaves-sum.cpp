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
        
        //base case 1
        if(!root)
            return 0;
        
        //initialize a queue
        queue<TreeNode*> q;
        q.push(root);
        int levelSum=0;
        
        //loop until the queue get empty
        while(!q.empty()){
            
            //with each loop, return the sum value back to the deafault one
            levelSum=0;
            int size=q.size();

            //loop again for level by level
            for(int i=0;i<size;i++){
                
                //save the current queue element's value
                auto root=q.front();
                //remove the current element
                q.pop();

                //add the current level nodes values
                levelSum+=root->val;
                
                //if the current node have a left node
                if(root->left)
                    //add it to the queue
                    q.push(root->left);
                //if the current node have a left node
                if(root->right)
                    //add it to the queue
                    q.push(root->right);
            }
        }
        
        //return the last level nodes' values
        return levelSum;
    }
};