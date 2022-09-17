class Solution {
public:
    int getMinDistance(vector<int>& nums, int target, int start) {
        
        //initialize a variable with the largest possible value
        int res=INT_MAX;
        
        //loop over the whole array elements
        for(int i=0;i<nums.size();i++){
            //check if the current value equals to the target one
            if(nums[i]==target)
                //if yes-> compare and save the minumum valid number reached in the loop
                res=min(res, abs(i-start));
                
        }
        
        //return the min absolute value of the two variables
        return res;
    }
};