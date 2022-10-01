class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        
        //initialize a new vector with the same size of the given one
        vector<int> res(nums.size());
        
        //initialize two pointers i&j
        //loop over the half array elements with a pointer k
        for(int i=0, j=n, k=0;i<n;){
            //replace the current position with the first pointer value
            res[k++]=nums[i++];
            //replace the current position with the second pointer value
            res[k++]=nums[j++];
            
            //incremeant the three pointers by one step
        }
        
        //return the new array elements
        return res;
    }
};