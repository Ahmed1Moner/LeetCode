class Solution {
public:
    bool findSubarrays(vector<int>& nums) {
        
        //loop over the whole array elements as a first pointer
        for(int i=0;i<nums.size()-1;i++){
            
        //loop over the remainder array elements as a second pointer
            for(int j=i+1;j<nums.size()-1;j++){
                //check if the current + the next digit values of the first pointer equals to the current + the next digit values of the second pointer
                if(nums[i]+nums[i+1]==nums[j]+nums[j+1])
                //if yes-> true
                    return true;
            }
        }
        
        //if no-> false
        return false;
    }
};