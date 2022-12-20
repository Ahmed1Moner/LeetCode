class Solution {
public:
    
    void backtrack(vector<int>& candidates, set<vector<int>>& ans, vector<int>& nums, int target, int sum, int i){
        
        if(sum>target)
            return;
        
        if(target==sum){
            ans.insert(nums);
            return;
        }
        
        for(int j=i;j<candidates.size();j++){
            
            nums.push_back(candidates[j]);            
            backtrack(candidates, ans, nums, target, sum+candidates[j], j);   
            nums.pop_back();
        }
        
        
    }
    
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        
        set<vector<int>> ans;
        vector<int> nums;
        
        backtrack(candidates, ans, nums, target, 0, 0);
        
        
        
        return vector<vector<int>> (ans.begin(), ans.end());
    }
};



