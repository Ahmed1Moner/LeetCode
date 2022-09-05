class Solution {
public:
    vector<bool> prefixesDivBy5(vector<int>& nums) {
        
        //initialize a new vector with boolean values
        vector<bool> res;
        int num=0;
        
        //loop over the whole array numbers
        for(int i=0;i<nums.size();i++){
            /*calculate the current element value added to the last number in the array which is multiplied by 2 as we're working with base-2 numbers
             & save the boolean value into the num variable*/
            num=(num*2+nums[i])%5;
            //check if it's divisable by 5 or not & insert the resultant boolean value into the new array
            res.push_back(num==0);
        }
        
        //return the new boolean values array
        return res;
    }
};