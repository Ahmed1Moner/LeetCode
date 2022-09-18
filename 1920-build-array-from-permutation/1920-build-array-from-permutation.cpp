class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        
        //initialize a new vector of the same size of the given vector
        vector<int> res(nums.size());
        
        //loop over the whole array elements
        for(int i=0;i<nums.size();i++)
            //add the value of the permutation to the array
            res[i]=nums[nums[i]];
        
        //return the new array values
        return res;
    }
};