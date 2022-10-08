class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        
        //initialize a vector
        vector<int> res;
        
        //loop over the whole array elements by two steps
        for(int i=0;i<nums.size()/2;i++){
            //initlaize frequency and value variables
            int freq=nums[2*i], val=nums[2*i+1];
            
            //loop over the whole array with the number of freq value
            while(freq-- >0){
                //add the val value to the array
                res.push_back(val);
            }
        }
            
        //return final new vector elements
        return res;
    }
};