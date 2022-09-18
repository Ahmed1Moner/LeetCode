class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        
        //loop over the whole array elements
        for(int i=cost.size()-3;i>=0;i--)
            //compare the next two elements values & get the minimum of them & update the current cost with the sum of the result to it
            cost[i]+=min(cost[i+1], cost[i+2]);
        
        //return the minimum cost value of the first two elements
        return min(cost[0], cost[1]);
    }
    
};