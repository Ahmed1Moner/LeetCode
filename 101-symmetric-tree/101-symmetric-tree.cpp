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
    bool isSymmetric(TreeNode* root) {
        
        //recall the helper function with the left and the right nodes
        return (isSymmetricHelp(root->left, root->right));
    }
    
    bool isSymmetricHelp(TreeNode *left, TreeNode *right){
        
        //base case 1: if it's a leaf node-> check their values
        if(!left || !right)
            return left==right;
        
        //base case 2: if the two nodes values aren't equal-> return false
        if(left->val != right->val)
            return false;
        
        //recursively, move to the left of the first pointer while to the right with the second one & vice versa
        return (isSymmetricHelp(left->left, right->right) && isSymmetricHelp(left->right, right->left));
        
    }
};


//     bool isSymmetric(TreeNode* root) {
        
//         //initialize two stacks from the tree type
//         stack<TreeNode *> stp1, stp2;
//         //push the left node in the first stack & the right in the second one
//         stp1.push(root->left), stp2.push(root->right);
        
//         //loop over the whole tree while the stacks aren't empty
//         while(!stp1.empty()){
//             //initialize two pointers, each on the top value in the stack
//             TreeNode* p1=stp1.top(), *p2=stp2.top();
//             //remove the top element from each stack
//             stp1.pop(), stp2.pop();
            
//             //compare the two new pointers

//             //if there're no ones, no left or right nodes-> skip this case
//             if(!p1 && !p2) continue;

//             //if the two nodes are valid & have the same values
//             if(p1 && p2 && p1->val==p2->val){
//                 //push left then right nodes in the first stack
//                 stp1.push(p1->left);
//                 stp1.push(p1->right);
//                 //push right then left nodes in the second stack
//                 stp2.push(p2->right);
//                 stp2.push(p2->left);
//             }
            
//             //if (!p1 || !p2)
//             else
//                 return false;
//         }
        
//         //after that, the two trees are symmetric around the center-> return true
//         return true;
//     }
