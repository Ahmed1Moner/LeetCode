class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        //initialize the maximum difference variable with initial value of zero
        int maxDiff=0;
        
        //loop over the whole array elements
        for(int i=0;i<nums.size();i++){
            
            //loop from the next of the startting point of the outer loop until the last element in the array
            for(int j=i+1;j<nums.size();j++){
                //if the two pointers points on the same element, skip this element
                if(i==j){
                    continue;
                }
                //get the difference between the elements each time, store it if it's max from the last difference
                if(nums[j]-nums[i]>maxDiff){
                    maxDiff=nums[j]-nums[i];
                }
                
            }
        }
        //return -1 if the maxDiff equals to zero, to distinguish if the max difference is already zero or not
        if(maxDiff==0){return -1;} else{return maxDiff;};
    }
};

