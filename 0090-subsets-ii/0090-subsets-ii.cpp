class Solution {
public:
    
    void backtrack(vector<int>& nums, set<vector<int>>& ans, vector<int>& temp, int i){
        
        //base case
        ans.insert(temp);
        
        for(int j=i;j<nums.size();j++){
            
//             if(j>i && nums[j]==nums[j-1])
//                 continue;
            
            temp.push_back(nums[j]);
            backtrack(nums, ans, temp, j+1);
            temp.pop_back();
        }
    }
    
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        
        set<vector<int>> ans;
        vector<int> temp;
        sort(nums.begin(), nums.end());
        
        backtrack(nums, ans, temp, 0);
        
        return vector<vector<int>> (ans.begin(), ans.end());
    }
};