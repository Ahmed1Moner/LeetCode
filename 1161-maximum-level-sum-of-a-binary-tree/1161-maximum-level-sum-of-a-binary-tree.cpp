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
    int maxLevelSum(TreeNode* root) {
        
        //base case 1
        if(!root)
            return 1;
        
        //initialize a queue
        queue<TreeNode*> q;
        q.push(root);
        //initalize sum & maximum value & current index & maximum level variabels
        int sum=0, maxVal=INT_MIN, level=1, maxLevel=1;
        
        //loop until the queue gets empty
        while(!q.empty()){
            
            int size=q.size();
            
            //loop again level by level in the queue
            while(size-- >0){
                
                //save the current queue element's value
                auto root=q.front();
                //remove the current element
                q.pop();
                
                //update the sum value by adding the current node value
                sum+=root->val;
                
                //if the current node have a left node
                if(root->left)
                    //add it to the queue
                    q.push(root->left);
                //if the current node have a left node
                if(root->right)
                    //add it to the queue
                    q.push(root->right);
                
            }
            
            //after each level, check if the current sum is more than the maximum one
            if(sum>maxVal){
                //if yes-> save both the current sum & the current level
                maxVal=sum;
                maxLevel=level;
            }
            
            //return the sum value back to the default one
            sum=0;
            //add the current level by one
            level++;
        }
        
        //return the index of the maximum level sum value
        return maxLevel;
    }
};