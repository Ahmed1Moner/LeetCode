class Solution {
public:
    
    void backtrack(vector<int>& nums, vector<vector<int>>& ans, vector<int>& temp, int i){
        //base case
        ans.push_back(temp);
        
        for(int j=i;j<nums.size();j++){
            
            temp.push_back(nums[j]);
            backtrack(nums, ans, temp, j+1);
            temp.pop_back();
        }
    }
    
    
    vector<vector<int>> subsets(vector<int>& nums) {
        
        vector<vector<int>> ans;
        vector<int> temp;
        
        backtrack(nums, ans, temp, 0);
        
        return ans;
    }
};

// Input: nums = [1,2,3]
// Output: [[],[1],[2],[1,2],[3],[1,3],[2,3],[1,2,3]]