class Solution {
public:

    set<vector<int>> unians;

    void backtrack(vector<int> nums, int i, int size){
        
        if(i==size){
            unians.insert(nums);
            return;
        }
        
        for(int j=i;j<=size;j++){
            swap(nums[i], nums[j]);
            backtrack(nums, i+1, size);
            swap(nums[i], nums[j]);
        }
    }
    
    vector<vector<int>> permuteUnique(vector<int>& nums) {

        backtrack(nums, 0, nums.size()-1);
        vector<vector<int>> ans(unians.begin(), unians.end());
        
        return ans;
    }
};