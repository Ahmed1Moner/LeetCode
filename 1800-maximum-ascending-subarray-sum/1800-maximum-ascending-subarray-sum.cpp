class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        
        //initialize sum & maximum sum variables with ititial values of the first element
        int maxSum=nums[0], sum=nums[0];
        
        //loop over the whole array elements
        for(int i=1;i<nums.size();i++){
            //check if the subarray is in increasing order, ascending
            if(nums[i-1]<nums[i])
                //if yes-> add the current value to the sum
                sum+=nums[i];
            else
                //if no-> begin a new sum variable for the new subarray with initiali value of the current element, too
                sum=nums[i];
            
            //at the end, compare and save the maximum possible sum
            maxSum=max(maxSum, sum);
        }
        
        //return the maximum possible sum value
        return maxSum;
    }
};