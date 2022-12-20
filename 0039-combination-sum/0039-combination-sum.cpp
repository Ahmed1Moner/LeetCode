class Solution {
public:
    
    void backtrack(vector<int>& candidates, vector<vector<int>>& ans, vector<int>& nums, int target, int sum, int i){
        
        //base case 1: if the sum exceeded the target-> backtrack
        if(sum>target)
            return;
        
        //base case 2: if the sum equals to the target-> save in the set & backtrack
        if(target==sum){
            ans.push_back(nums);
            return;
        }
        
        for(int j=i;j<candidates.size();j++){
            
            nums.push_back(candidates[j]);            
            backtrack(candidates, ans, nums, target, sum+candidates[j], j);   
            nums.pop_back();
        }
        
        
    }
    
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        
        vector<vector<int>> ans;
        vector<int> nums;
        
        backtrack(candidates, ans, nums, target, 0, 0);
        
        return ans;
    }
};



