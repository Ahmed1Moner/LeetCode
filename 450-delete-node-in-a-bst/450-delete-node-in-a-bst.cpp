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

    TreeNode* deleteNode(TreeNode* root, int key) {
        //empty tree-> return null or the root
        if(!root){return NULL;}
        //base case: if the element smaller than data-> check in the left side
        if(key < root->val){root->left=deleteNode(root->left, key);}
        //base case: if the element smaller than data-> check in the left side
        else if(key > root->val){root->right=deleteNode(root->right, key);}
        
        else{
            //case 1: leaf node, has no child-> delete it & return null
            if(!root->left && !root->right){
                delete root;
                return NULL;
            }
            
            //case 2: has only one child, either left node or right one
            
            //if it has a right node-> deal with it as a leaf node, delete it & return the reminder of the tree
            else if(!root->left and root->right!=NULL){
               TreeNode* temp=root->right;
                delete root;
                return temp;   
            }
            //if it has a left node-> deal with it as a leaf node, delete it & return the reminder of the tree
            else if(!root->right and root->left!=NULL){
                TreeNode* temp=root->left;
                delete root;
                return temp;   
            }
            
            //case 3: has two childs
            
            //we have main two methods: either calling getting the smallest value of the right side-> inorder succesor 
            //or the biggest value of the left side-> inorder presuccessor
            
            //case 1: getting the minimum value of the right side of the sub-tree-> inorder successor's data
            TreeNode *temp=root->right;
            while(temp->left)
                temp=temp->left;
            
            //  //case 2: getting the maximum value of the left side of the sub-tree-> inorder presuccessor's data
            // TreeNode *temp=root->left;
            // while(temp->right)
            //     temp=temp->right;
            
            //copy its value to the root node data-> successor's data
            root->val=temp->val;
            //delete the whole right sub-tree-> delete the inorder successor
            root->right = deleteNode(root->right, temp->val);
        
        }
        return root;
    }
};

