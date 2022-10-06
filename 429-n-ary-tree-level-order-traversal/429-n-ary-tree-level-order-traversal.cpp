/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        
        //base case 1
        if(!root)
            return{};
        
        //initialize a queue
        queue<Node*> q;
        q.push(root);
        //initalize a big vector for final result, vector of vectors of integers
        vector<vector<int>> res;
        
        //loop until the queue gets empty
        while(!q.empty()){
            
            //initalize a small temporary vector
            vector<int> temp;
            int size=q.size();
    
            //loop again level by level in the queue
            while(size-- >0){
                
                //save the current queue element's value
                auto root=q.front();
                //remove the current element
                q.pop();
                //push the current nodes' values in the temporary vector
                temp.push_back(root->val);
                
                //loop over the current node's childrens 
                for(auto c:root->children)
                    //add them to the queue
                    q.push(c);
                
            }
            
            //push the temp vector results in the big one for each loop
            res.push_back(temp);
            
        }
        
        //return the final vector values
        return res;
    }
};