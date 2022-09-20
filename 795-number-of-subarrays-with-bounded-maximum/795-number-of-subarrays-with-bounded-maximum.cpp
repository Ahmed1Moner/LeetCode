class Solution {
public:
    int numSubarrayBoundedMax(vector<int>& nums, int left, int right) {
        
        //initialize a counter & two pointers
        int counter=0, j=0, k=0;
        
        for(int i=0;i<nums.size();i++){
            
            //case 1: if the current value is smaller than the bound
            if(nums[i]<left){
                //add the third pointer value to the counter
                counter+=k;
            }
            //case 2: if the current value is bigger than the bound
            else if(nums[i]>right){
                //return the third pointer to its initial position again
                k=0;
                //move the second pointer in the next position of the first one
                j=i+1;
            }
            //case 3: if the current value is in the bound
            else{
                //move the third position in the middle position
                k=(i-j+1);
                //add the third pointer value to the counter
                counter+=k;
            }
        
        }
        
        //return the final value of the counter
        return counter;
    }
};