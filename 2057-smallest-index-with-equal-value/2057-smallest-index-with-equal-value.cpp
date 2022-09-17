class Solution {
public:
    int smallestEqual(vector<int>& nums) {
        
        //loop over the whole array elements
        for(int i=0;i<nums.size();i++)
            //check if the current index is divisible by the current value
            if(i%10==nums[i])
                //if yes-> return the valid index
                return i;
        
        //if no-> return -1
        return -1;
    }
};