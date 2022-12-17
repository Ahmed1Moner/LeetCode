class Solution {
public:
    
    void backtrack(vector<vector<int>>& ans, vector<int> &nums, int i, int size){
        
        if(i==size){
            ans.push_back(nums);
            return;
        }
        
        for(int j=i;j<=size;j++){
            swap(nums[i], nums[j]);
            backtrack(ans, nums, i+1, size);
            swap(nums[i], nums[j]);
        }
        
    }
    
    vector<vector<int>> permute(vector<int>& nums) {
        
        vector<vector<int>> ans;
        
        backtrack(ans, nums, 0, nums.size()-1);
        
        return ans;
    }
};