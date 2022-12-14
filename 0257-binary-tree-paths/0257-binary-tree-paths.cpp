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
    vector<string> binaryTreePaths(TreeNode* root) {
        
        //initialize a vector of string
        vector<string> ans;
        //initialize a stack of tree & string values
        stack<pair<TreeNode*, string>> st;
        //initial values of the main root node & empty string
        st.push({root, ""});
        
        //loop until the stack gets empty
        while(!st.empty()){
            
            //temp current node-> key of the pair of the top of the stack
            TreeNode* currNode=st.top().first;
            //temp current string path-> value of the pair of the top of the stack
            string currPath=st.top().second;
            //pop the top
            st.pop();
            
            //add the current path by the string of the current node value
            currPath+=to_string(currNode->val);
                
            //case 1: if a leaf node-> push it in the answer vector
            if(currNode->left==NULL && currNode->right==NULL)
                ans.push_back(currPath);
            
            //case 2: if it still have left nodes-> add them in the stack + the arraw symbol
            if(currNode->left)
                st.push({currNode->left, currPath+"->"});
            
            //case 3: if it still have right nodes-> add them in the stack + the arraw symbol
            if(currNode->right)
                st.push({currNode->right, currPath+"->"});
        }
        
        //return the final vector content
        return ans;
    }
};