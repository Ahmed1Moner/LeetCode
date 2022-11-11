class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        
        //loop over the whole array elements
        for(int i=0,j=0;i<nums.size();i++){
            
            //for this comparison only, check if it's a valid index first
            if(i<nums.size()-1 && nums[i]==nums[i+1]){
                
                //if the two consecutive elements are equal-> multiply the element by 2 && set the next one to zero
                nums[i]*=2;
                nums[i+1]=0;
            }
            
            //in the same loop, if the current isn't zero-> swap it by the second pointer's position
            if(nums[i]!=0){
                swap(nums[i], nums[j++]);
            }
        }
        
        //return the new array elements
        return nums;
    }
};