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
    int sumEvenGrandparent(TreeNode* root) {
        
        //base case 1
        if(!root)
            return 0;
        
        queue<TreeNode*> q;
        q.push(root);
        int sum=0;
        
        while(!q.empty()){
            int size=q.size();
            
            while(size-- >0){
                
                auto root=q.front();
                q.pop();
                
                if(root->val%2!=0){
                    if(root->left)
                        q.push(root->left);
                    if(root->right)
                        q.push(root->right);
                    continue;
                }
                
                if(root->left){
                    if(root->left->left)
                        sum+=root->left->left->val;
                    if(root->left->right)
                        sum+=root->left->right->val;
                    q.push(root->left);
                }
                
                if(root->right){
                    if(root->right->left)
                        sum+=root->right->left->val;
                    if(root->right->right)
                        sum+=root->right->right->val;
                    q.push(root->right);
                }                
            }
        }
        
        return sum;
        
    }
};