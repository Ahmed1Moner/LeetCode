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
    vector<int> largestValues(TreeNode* root) {
        
        //base case 1
        if(!root)
            return {};
        
        queue<TreeNode*> q;
        q.push(root);
        vector<int> res;
        int maxVal=INT_MIN;
        
        while(!q.empty()){
            
            int size=q.size();
            
            while(size-- >0){
                
                auto root=q.front();
                q.pop();
                
                maxVal=max(maxVal, root->val);
                
                if(root->left)
                    q.push(root->left);
                if(root->right)
                    q.push(root->right);
            }
            
            res.push_back(maxVal);
            maxVal=INT_MIN;
        }
        
        return res;
    }
};