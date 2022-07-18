class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        //initialize a partial sum variable
        int sum=0;
        
        //loop over the whole array elements
        for(int i=0;i<nums.size();i++){
            //add the current element value to the sum variable
            sum+=nums[i];
            //replace the current old element value by the new sum one
            nums[i]=sum;
        }
        
        //return the new elements value of the array
        return nums;
    }
};