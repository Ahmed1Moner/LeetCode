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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        
    //base case 1
        if(!root)
            return {};
        
        //initialize a queue
        queue<TreeNode*> q;
        q.push(root);
        //initalize a big vector for final result, vector of vectors of integers
        vector<vector<int>> res;
        
        //loop until the queue gets empty
        while(!q.empty()){
            
            //initalize a temporary vector
            vector<int> temp;
            int size=q.size();
    
            //loop again level by level in the queue
            while(size-- >0){
                
                //save the current queue element's value
                auto root=q.front();
                //remove the current element
                q.pop();
                //push the current nodes' values in the temporary vector
                temp.push_back(root->val);
                
                //if the current node have a left node
                if(root->left)
                    //add it to the queue
                    q.push(root->left);
                //if the current node have a left node
                if(root->right)
                    //add it to the queue  
                    q.push(root->right);
            }
            
            //add the temp vector values to the big vector
            res.push_back(temp);
        }
        
        //reverse the vectors of the result vector 
        reverse(res.begin(), res.end());
        
        //return the final vector reversed vector values
        return res;
    }
};