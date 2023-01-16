class Solution {
public:
    
    int dp[10000+1];
    
    bool helper(vector<int> &nums, int size, int i){
        
        //base case 1: if the pointer reaches the last element-> true
        if(i==size-1)
            return true;
        //base case 2: if the pointer exceed the last element-> false
        if(i>size-1)
            return false;
        //base case 3: if we visit & decide if it's valid or not-> return the decision
        if(dp[i]!=-1)
            return dp[i];
        
        //at each position, we can move from [1, nums[i]] steps
        for(int j=1;j<=nums[i];j++)
            //if we reach the last elements through the base case-> true & save it
            if(helper(nums, size, i+j))
                return dp[i]=true;
        
        //else-> false & save it
        return dp[i]=false;
    }
    
    bool canJump(vector<int>& nums) {
        
        //make all the dp array's elements = -1
        memset(dp, -1, sizeof(dp));
        
        //call the helper function starting with the first position
        return helper(nums, nums.size(), 0);
    }
};