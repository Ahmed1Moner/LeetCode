class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        
        //initialize a subarrays counter
        int counter=1;
        long long max=0;
        
        //loop over the whole array elements
        for(int i=0;i<nums.size();i++){
            //check if the current element equals 0-> add the counter by 1 & add the maximum counter by the last counter value
            if(nums[i]==0){
                max+=counter;
                counter++;
            }
            //if not, doesn't equal to 0-> return the counter value back to 0 
            else{
                counter=1;
            }
            
        }
        
        //return the final number of subarrays
        return max;
        
    }
};