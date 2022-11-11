class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        
        
        //loop over the whole array elements
        for(int i=0;i<nums.size()-1;i++){
            
            //check if the current element equals to the next one
            if(nums[i]==nums[i+1]){
                
                //if yes-> multiply it by 2 && set the next one to zero
                nums[i]*=2;
                nums[i+1]=0;
            }
        }
        
        int j=0;
        
        //loop again to shift the non-zero elements to be the first ones
        for(int num:nums)
            if(num!=0)
                nums[j++]=num;
        
        //loop again to shift the zeros elements to be the last ones
        while(j<nums.size())
            nums[j++]=0;
            
        //return the new array elements
        return nums;
    }
};