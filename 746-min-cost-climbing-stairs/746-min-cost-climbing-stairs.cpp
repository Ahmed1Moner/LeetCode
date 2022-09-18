class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        
        //initialize two variables-> previous element & seconde previous one
        int prev1=0, prev2=0;
        
        //loop over the whole array elements
        for(int i=2;i<=cost.size();i++){
            
            //if you'll jump only one step-> add the last element value to the previous value
            int jump1=prev1+cost[i-1];
            //if you'll jump two steps-> add the second last element value to the second previous value
            int jump2=prev2+cost[i-2];
            
            //save the previous value to the second variable
            prev2=prev1;
            //store the minimum value between the two jumps in the previous one
            prev1=min(jump1, jump2);
        }
        
        //return the previous one value
        return prev1;
    }
};