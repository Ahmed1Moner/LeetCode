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
        
        //initialize a queue
        queue<TreeNode*> q;
        q.push(root);
        int sum=0;
        
        //loop until the queue gets empty
        while(!q.empty()){
            int size=q.size();
            
            //loop again level by level in the queue
            while(size-- >0){
                
                //save the current queue element's value
                auto root=q.front();
                //remove the current element
                q.pop();
                
                //check if the current node has odd value
                if(root->val%2!=0){
                    //if the current node have a left node
                    if(root->left)
                        //add it to the queue
                        q.push(root->left);
                    //if the current node have a left node
                    if(root->right)
                        //add it to the queue
                        q.push(root->right);
                    continue;
                }
                
                //check if this node have a left child node
                if(root->left){
                    //then, check if it also have a left grandson node either left or right-> add its value to the sum variable
                    if(root->left->left)
                        sum+=root->left->left->val;
                    if(root->left->right)
                        sum+=root->left->right->val;
                    
                    //add its left nodes to the queue
                    q.push(root->left);
                }
                
                //check if this node have a left child node
                if(root->right){
                    //then, check if it also have a left grandson node either left or right-> add its value to the sum variable
                    if(root->right->left)
                        sum+=root->right->left->val;
                    if(root->right->right)
                        sum+=root->right->right->val;
                    
                    //add its right nodes to the queue
                    q.push(root->right);
                }                
            }
        }
        
        //return the final sum value
        return sum;
        
    }
};