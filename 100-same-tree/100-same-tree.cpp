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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        
        //if the two trees are null-> return true
        if(!p && !q) return true;
        //if one of them is null-> return false
        if(!p || !q) return false;
        
        //initialize two stacks from the tree type
        stack<TreeNode *> stp, stq;
        //push the two trees in their stacks
        stp.push(p), stq.push(q);
        
        //loop over the whole tree while the stacks aren't empty
        while(!stp.empty()){
            //initialize two pointers, each on the top value in the stack
            TreeNode *p2=stp.top(), *q2=stq.top();
            //remove the top element from each stack
            stp.pop(), stq.pop();
            
            //compare the two new pointers
            
            //if there's no ones, no left or right nodes-> skip this case
            if(!p2 && !q2) continue;
            //if there's left or right node in only one tree-> return fasle
            if(!p2 || !q2) return false;
            //if the two current values aren't equal-> return false
            if(p2->val != q2->val) return false;
            
            //add the left node of each pointer to their stack
            stp.push(p2->left), stq.push(q2->left);
            //add the right node of each pointer to their stack
            stp.push(p2->right), stq.push(q2->right);
        }
        
        //after that, the two trees are identical-> return true
        return true;
    }
};


// class Solution {
// public:
//     bool isSameTree(TreeNode* p, TreeNode* q) {
        
//         //if the two trees are null-> return true
//         if(!p && !q)
//             return true;
        
//         //if one of them is null-> return false
//         else if( (!p && q) || (p && !q))
//             return false;
        
//         //base case: if the value of each pointer aren't the same-> return false
//         if(p->val != q->val)
//             return false;
        
//         //return if the two right values are equals && the two left ones are the same
//         return isSameTree(p->right, q->right) && isSameTree(p->left, q->left);
//     }
// };
