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
    vector<vector<int>> levelOrder(TreeNode* root) {
        
        //base case: if there's no tree-> return an empty vector
        if(!root)
            return {};
        
        //initialize a queue for BFS & a temporary vector to store each level elements & a final result one to store all elements
        queue <TreeNode*> que;
        vector<vector<int>> res;
        vector<int> temp;
        
        //store the main root node on the queue
        que.push(root);

        //loop until the queue have elements
        while(!que.empty()){
            
            int count=que.size();
            //loop with the number of queue elements
            for(int i=0;i<count;i++){
            //while(count--)...
                
                //move the root to the front element
                root=que.front();
                //delete that element from the queue
                que.pop();
                //store its value in the temp vector
                temp.push_back(root->val);
                    
                //check if the current root have left or right nodes or no ... if yes-> store it in the queue, to be stored in the temp vectore but in its true time & if no-> ignore that time, move to the next root value
                if(root->left)
                    que.push(root->left);
                if(root->right)
                    que.push(root->right);
                
            }
            
            //move all temp elements to result vector which consists of vector of elements
            res.push_back(temp);
            //delete all the temp values
            temp.clear();
        }
        
        //return the final vector of all vectors
        return res;
        
    }
};