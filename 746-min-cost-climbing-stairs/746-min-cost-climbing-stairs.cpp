class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        
        //loop over the whole array elements
        for(int i=2;i<cost.size();i++)
            //compare the last two elements value & get the minimum of them & update the current cost with the sum of the result to it
            cost[i]+=min(cost[i-1], cost[i-2]);
        
        //return the minimum cost values of the last two elements
        return min(cost[cost.size()-1], cost[cost.size()-2]);
    }
    
};