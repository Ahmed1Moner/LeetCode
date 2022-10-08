class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        
        //initialize a vector
        vector<int> res;
        
        //loop over the whole array elements by two steps
        for(int i=0;i<nums.size();i+=2)
            
            //loop again over the array with the number of frequency value
            for(int j=0;j<nums[i];j++)
                //add the value of val with the numbers of freq value
                res.push_back(nums[i+1]);
            
        //return final new vector elements
        return res;
    }
};