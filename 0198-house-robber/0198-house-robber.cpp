class Solution {
public:
    
       
    int rob(vector<int>& nums) {
        
        //check first
        if(nums.size()==1)
            return nums[0];
        
        int prev1=0;
        int prev2=0;
        
        //loop over the whole vector elements
        for(auto num:nums){
            
            //save the first previous element's value
            int temp=prev1;
            //get the maximum value between the two scenarios-> (if getting the previous previous value + the current one)
            prev1=max(prev2+num, prev1);
            //swap the values
            prev2=temp;
        }
        
        //return the last first previous element's value
        return prev1;
        
    }
};