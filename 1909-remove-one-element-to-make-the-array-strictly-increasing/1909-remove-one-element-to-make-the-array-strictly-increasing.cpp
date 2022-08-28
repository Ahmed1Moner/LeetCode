class Solution {
public:
    bool canBeIncreasing(vector<int>& nums) {
        
        bool check=false;
        
        //loop over the whole array elemets starting from the second element
        for(int i=1;i<nums.size();i++){
            //condition 1: check if the current element value is less than or equals the previosone
            if(nums[i-1]>=nums[i]){
                //condition 2: check if we've checked this element before or not
                if(check)
                    //if yes, checked before-> false
                    return false;
                else
                    //if no, not yes-> marked as checked before
                    check=true;
                
                //condition 3: if the current number is less than or equal to the second previous one, the number before it after deleting the marked number
                if(i>1 && nums[i-2]>=nums[i])
                    //if yes-> replace the current element value with the previous one, as we're comparing it after that
                    nums[i]=nums[i-1];
            }
        
        }
        
        //if it passed all these cases-> true
        return true;
    }
};