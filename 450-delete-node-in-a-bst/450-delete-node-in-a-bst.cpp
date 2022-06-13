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
    //case 1: getting the minimum value of the right side of the sub-tree-> inorder successor's data
    TreeNode *minValueNode(TreeNode *root){
        //initialize a traversal pointer
        TreeNode *tra=root;
        //keep traversing until getting the leaf node of the leaf side
        while(tra && tra->left){
            tra=tra->left;
        }
        //return this node
        return tra;
    }
    
    // //case 2: getting the maximum value of the left side of the sub-tree-> inorder presuccessor's data
    // TreeNode *maxValueNode(TreeNode *root){
    //     //initialize a traversal pointer
    //     TreeNode *tra=root;
    //     //keep traversing until getting the leaf node of the right side
    //     while(tra && tra->right){
    //         tra=tra->right;
    //     }
    //     //return this node
    //     return tra;
    // }
    
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
            
            //calling the case 1 function to get the min value of the right sub-tree
            TreeNode *temp=minValueNode(root->right);
            //copy its value to the root node data-> successor's data
            root->val=temp->val;
            //delete the whole right sub-tree-> delete the inorder successor
            root->right = deleteNode(root->right, temp->val);
            
            // //calling the case 2 function to get the max value of the left sub-tree
            // TreeNode *temp=maxValueNode(root->left);
            // //copy its value to the root node data-> presuccessor's data
            // root->val=temp->val;
            // //delete the whole left sub-tree-> delete the inorder presuccessor
            // root->left = deleteNode(root->left, temp->val);
            
        }
        return root;
    }
};