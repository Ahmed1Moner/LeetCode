class Solution {
public:
    
    bool decreasing(vector<int> nums){
        
        //loop over the whole array elements
        for(int i=0;i<nums.size()-1;i++)
            //check if the array elements is decresing or not
            if(nums[i]>nums[i+1])
                //if not-> false
                return false;
        
        //if yes-> true
        return true;
    }
    
    bool increasing(vector<int> nums){
        
        //loop over the whole array elements
        for(int i=0;i<nums.size()-1;i++)
            //check if the array elements is incresing or not
            if(nums[i]<nums[i+1])
                //if not-> false
                return false;
        
        //if yes-> true
        return true;
    }
    
    bool isMonotonic(vector<int>& nums) {
        
        //check if the array elements are either ALL increasing or ALL decreasing
        return increasing(nums) || decreasing(nums);
   
    }
};