class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        //initialize two sums' variables
        int totalSum=0,partialSum=0;
        
        //loop over the whole array elements to get their total sum
        for(int n:nums)
            totalSum+=n;
        
        //loop again over them to check
        for(int i=0;i<nums.size();i++){
            //subtract the current number from the total sum
            totalSum-=nums[i];
            //check if the current total sum is equal to the partial sum or not
            if(totalSum==partialSum){
                //if yes->return the index
                return i;
            }
            //add the current element to the partial sum varialbe
            partialSum+=nums[i];
        }
        
        //if the loop is overed & no index has been returned-> return -1
        return -1;
    }
};

