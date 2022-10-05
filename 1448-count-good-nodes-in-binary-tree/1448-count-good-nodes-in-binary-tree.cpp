class Solution {
public:
    
    //initialize a counter
    int counter=0;
    
    int goodNodes(TreeNode* root) {
        
        //base case 1
        if(!root)
            return 0;
        
        //call the helper function 
        helper(root, INT_MIN);
        
        //return the final counter value
        return counter;
    }
    
    void helper(TreeNode* root, int maxVal){
        
        //base case 2
        if(!root)
            return;
                
        //base case 3
        if(root->val>=maxVal){
            //add the counter by one
            counter++;
            //update the current maximum value with the current node one
            maxVal=root->val;
        }       
        
        //recursively, call the helper function with the current maximum value with either the left or the right nodes
        helper(root->left, maxVal);
        helper(root->right, maxVal);        
        
    }
};
