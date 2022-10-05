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

    int goodNodes(TreeNode* root) {
        
        //base case 1
        if(!root)
            return 0;
        
        //initialize a queue of both tree & integer nodes as pair
        queue<pair<TreeNode*, int>> q;
        q.push({root, INT_MIN});
        int counter=0;
        
        //loop until the queue gets empty
        while(!q.empty()){
            
            //save the current queue element's value
            auto [root, maxVal]=q.front();
          //remove the current element
            q.pop();
            
            //base case 2
            if(root->val>=maxVal){
                //add the counter by one
                counter++;
                //update the current node value in the maximum variable
                maxVal=root->val;
            }
            
            //if the current node have a left node
            if(root->left)
                //add it to the queue
                q.push({root->left, maxVal});
            //if the current node have a right node
            if(root->right)
                //add it to the queue
                q.push({root->right, maxVal});
            
        }
        
        //return the final counter value
        return counter;
    }
    
};