class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {        
        //loop over the whole array elements
        for(int i=1;i<nums.size();i++){
            //replace the current old element value by the sum of the previous & the cuurent
            nums[i]+=nums[i-1];
        }
        
        //return the new elements value of the array
        return nums;
    }
};