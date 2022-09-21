class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        
        //initialize a new array with the same size of the given one & with initial values of 0s
        vector<int> res(nums.size(), 0);
        //initialize two pointers-> one for positive index & one for the negative
        int posInd=0, negInd=1;
        
        //loop over the whole array elements
        for(int num:nums){
            
            //check if the current element is positive
            if(num>0){
                //replace it by its correct position in the new array
                res[posInd]=num;
                //incremeant the positive pointer by 2
                posInd+=2;
            }
            else{
                //replace it by its correct position in the new array
                res[negInd]=num;
                //incremeant the positive pointer by 2
                negInd+=2;
            }
        }
        
        //return the new array values
        return res;
    }
};