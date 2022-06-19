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
    vector<int> inorderTraversal(TreeNode* root) {
        //if the tree's empty-> return null
        if(!root){
            return {};
        }
        
        // & a stack to push the elements with the order I need in a vetor
        stack<TreeNode*> st;
        //initialize a vector to store in the ordered elements
        vector<int> res;

        //loop until finishing the tree elements & the stack isn't empty
        while(root || !st.empty()){
            //if I have a root node-> push it in the stack & move to the left sub-tree
            //the case that stops this condition when the root points on null after the last left node
            if(root){
                st.push(root);
                root=root->left;
            }
            //if I don't have a root node-> put the current node value in the vector
            // & pop the current elmenet & move to the right sub-tree
            else{
                //since that it points on null to stop the above condition-> return it back to the topper element in the stack
                root=st.top();
                //add the current root value to the vector
                res.push_back(root->val);
                //delete the current added element from the stack
                st.pop();
                //move to the right sub-tree
                root=root->right;
            }
        }
        //return the vector elements
        return res;
    }
};
