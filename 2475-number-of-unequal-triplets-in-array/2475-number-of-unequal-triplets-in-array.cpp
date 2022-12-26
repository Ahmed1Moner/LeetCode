class Solution {
public:
    int unequalTriplets(vector<int>& nums) {
        
        //initialize a counter
        int counter=0;
        
        //loop over the whole array elements, nested & check the conditions
        for(int i=0;i<nums.size();i++)
            for(int j=i+1;j<nums.size();j++)
                if(nums[i]!=nums[j])
                    for(int k=j+1;k<nums.size();k++)
                        if(nums[i]!=nums[k] && nums[j]!=nums[k])
                            counter++;
        
        //return the final counter value
        return counter;
    }
};