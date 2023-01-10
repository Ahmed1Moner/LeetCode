class Solution {
public:
    
    int helper(vector<int> &nums, vector<int> &dp, int i){
        
        //base case: if the index reached the end of the vector-> return 
        if(i>nums.size()-1)
            return 0;
        
        //if the cuurent value is calculated before-> just return it
        if(dp[i]!=-1)
            return dp[i];
        
        //recursive case: get the maximum value between the two scenarios-> (if getting the current element + the next next ones) && (start getting from the next one) && save the calculated value in the dp vector
        return dp[i]=max((nums[i]+helper(nums, dp, i+2)),(helper(nums, dp, i+1)));
        
    }
    
    int rob(vector<int>& nums) {
        
        //check first
        if(nums.size()==1)
            return nums[0];
        
        //initialize a vector of -1s
        vector<int> dp(nums.size()+1, -1);
        
        //call the helper function
        return helper(nums, dp, 0);
        
    }
};