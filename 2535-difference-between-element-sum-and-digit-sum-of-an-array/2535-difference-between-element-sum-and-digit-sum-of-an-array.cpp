class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        
        int elementSum=0;
        int digitSum=0;
        
        //iterate over the whole array elements
        for(int i=0;i<nums.size();i++){
            
            //get the sum of the elements
            elementSum+=nums[i];
            
            //iterate over the whole elements digits
            while(nums[i]!=0){
                
                //get the sum of the digits
                digitSum+=(nums[i]%10);
                nums[i]/=10;
            }
        }
        
        //return the absolute difference between them
        return abs(elementSum-digitSum);
    }
};