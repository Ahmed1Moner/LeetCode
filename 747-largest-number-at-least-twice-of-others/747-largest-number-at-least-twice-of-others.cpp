class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        //initialize the used variables
        int largest=INT_MIN,index=-1;
        
        //loop over the whole elements to find the greatest number & its index
        for(int j=0;j<nums.size();j++){
            //compare each element with the greatest number value
            if(nums[j]>largest){
                //store it into the variable & its index
                largest=nums[j];
                index=j;
            }
        }
        
        //loop again to check the required condition 
        for(int i=0;i<nums.size();i++){
            //if it points on the largest number address-> skip it
            if(largest!=nums[i]){
            //if the condition true-> continue checking other elements
            if(largest>=nums[i]*2)
                continue;
            //if not-> break out of the loop-> return -1
            else
                return -1;
            }
        }
        
        //return the index if all elements pass the conidiotn
        return index;
    }
};