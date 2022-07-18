class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        //initialize a counter & maximum variables
        int counter=1, max=1;

        //loop over the whole array elements
        for(int i=0;i<nums.size()-1;i++){
            //check if the current number is smaller than the next one
            if(nums[i]<nums[i+1])
                //if yes->add the counter by one
                counter++;
            else
                //if no-> return to its default value
                counter=1;

            //compare the current counter value with max, save the max one
            if(counter>max)
                max=counter;
        }

        //return the maximum value
        return max;

    }
};