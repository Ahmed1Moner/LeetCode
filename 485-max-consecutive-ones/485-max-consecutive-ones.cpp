class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        //initialize a counter & a maximum variable
        int counter=0,max=INT_MIN;

        //loop over the whole array elements
        for(int j=0;j<nums.size();j++){
            //check if the current element is one, if yes->add the counter by one
            if(nums[j]==1)
                counter++;
            //if no->return its value back to the default one
            else
                counter=0;
            //compare its value with the maximum variable value & save the max one
            if(counter>max)
                max=counter;
            }
        
        //return the max value reached
        return max;
    }
};