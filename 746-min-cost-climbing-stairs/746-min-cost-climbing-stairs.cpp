class Solution {
public:
    
    int helper(vector<int>& dp, vector<int>& cost, int i){
        
        //base case 1: if the index=0|1 -> save its value to the same position in the new array
        if(i<=1)
            return dp[i]=cost[i];
        
        //base case 2: if the position reached before-> return its result immediately
        if(dp[i]!=-1)
            return dp[i];
        
        //the current position will be the min of the last two ones + the value of the old array
        return dp[i]=cost[i]+min(helper(dp, cost, i-1), helper(dp, cost, i-2));
    }
    
    int minCostClimbingStairs(vector<int>& cost) {
        
        //initialize a new vector with initial values of -1s
        vector<int> dp(cost.size()+1, -1);
        
        //call the helper function with the last two elements in the array & compare and return the minimum value
        return min(helper(dp, cost, cost.size()-1), helper(dp, cost, cost.size()-2));
    }
};