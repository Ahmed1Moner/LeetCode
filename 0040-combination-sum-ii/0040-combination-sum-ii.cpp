class Solution {
public:
    
    void backtrack(vector<int>& candidates, vector<vector<int>> &ans, vector<int> &nums, int target, int sum, int i){
        
        //base case 1: if the sum exceeded the target-> backtrack
        if(sum>target)
            return;
        
        //base case 2: if the sum equals to the target-> save in the vector & backtrack
        if(sum==target){
            ans.push_back(nums);
            return;
        }
        
    
        //loop over the whole vector elements
        for(int j=i;j<candidates.size();j++){

            if(j>i && candidates[j]==candidates[j-1])
                continue;
            
            //do, add the current element into the vector
            nums.push_back(candidates[j]);      
            //recursivelly, backtrack with the new sum & a unique element
            backtrack(candidates, ans, nums, target, sum+candidates[j], j+1);   
            //undo, remove the current element into the vector
            nums.pop_back();
        }

        
    }
    
    
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
             
        //initialize a result vector
        vector<vector<int>> ans;
        vector<int> nums;
   
        //sort the vector elements first
        sort(candidates.begin(), candidates.end());
   
        //call the helper function
        backtrack(candidates, ans, nums, target, 0, 0);
        
        //return the final result elements
        return ans;
    }
};