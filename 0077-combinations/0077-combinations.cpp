class Solution {
public:
    
    void backtrack(vector<vector<int>> &ans, vector<int>& nums, int n, int k, int index){
        
        //base case: if the number of elements in the vector reaches k
        if(nums.size()==k){
            //add the temporary vector elements to the big one
            ans.push_back(nums);
            return;
        }
        
        //loop over the whole vector elements
        for(int i=index;i<=n;i++){
            
            //do, add the current element into the vector
            nums.push_back(i);
            //recursivelly, backtrack
            backtrack(ans, nums, n, k, i+1);
            //undo, remove the current element into the vector
            nums.pop_back();
        }
    }
    
    
    vector<vector<int>> combine(int n, int k) {
        
        //initialize a result vector
        vector<vector<int>> ans;
        vector<int> nums;
        
        //call the helper function
        backtrack(ans, nums, n, k, 1);
        
        //return the final result elements
        return ans;
    }
};