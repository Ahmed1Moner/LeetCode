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
        
        int sum=0;

        //check first if the current node has an even value
        if(root->val%2==0){
            
            //check if is has left node 
            if(root->left){
                //then, check if it has either left or right node
                if(root->left->left)
                    //add its value to the sum variable
                    sum+=root->left->left->val;
                if(root->left->right)
                    sum+=root->left->right->val;
            }
            
            //check if is has left node 
            if(root->right){
                //then, check if it has either left or right node
                if(root->right->left)
                    //add its value to the sum variable
                    sum+=root->right->left->val;
                if(root->right->right)
                    sum+=root->right->right->val;
            }
        }

        //add the outcomes of the dfs node values
        sum+=sumEvenGrandparent(root->left);
        sum+=sumEvenGrandparent(root->right);
        
        //return the final sum value
        return sum;
    }
};