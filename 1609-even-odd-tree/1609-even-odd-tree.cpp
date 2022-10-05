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
    bool isEvenOddTree(TreeNode* root) {
        
        //base case 1
        if(!root)
            return true;
        
        //initialize a queue
        queue<TreeNode*> q;
        q.push(root);
        int level=0;
        
        //loop until the queue gets empty
        while(!q.empty()){
            
            //initialize a temporary variable with initial value of minimum possible value if it's an even level & with the maximum possible one if odd one
            int size=q.size();
            auto temp=(level%2==0) ? INT_MIN : INT_MAX;
            
            //loop again level by level in the queue
            while(size-- >0){
                
                //save the current queue element's value
                auto root=q.front();
                //remove the current element
                q.pop();
                
                //check the three required coditions
                
                //if it's even level & either the nodes values are even, too or they are in decreasing order-> false
                if((level%2==0) && (root->val<=temp || root->val%2==0))
                    return false;
                
                //if it's odd level & either the nodes values are odd, too or they are in increasing order-> false
                if((level%2!=0) && (root->val>=temp || root->val%2!=0))
                    return false;
                
                //update the temp variable with the current node value
                temp=root->val;
                
                //if the current node have a left node
                if(root->left)
                    //add it to the queue
                    q.push(root->left);
                //if the current node have a right node
                if(root->right)
                    //add it to the queue
                    q.push(root->right);
                
            }
            
            //add the level by one
            level++;
        }
        
        //after that, if all conditions are checked & passes-> true
        return true;
    }
};