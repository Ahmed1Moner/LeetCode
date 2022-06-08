class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        //if the array is empty, return 0
        if(nums.size()==0){return 0;}
        
        //work with i & counter as two pointers
        int counter=0;
        for(int i=0;i<nums.size();i++){
            //if the element value doesn't equal to the given one
            if(nums[i]!=val){
                //replace the second pointer value with the one that doesn't equal to the given value
                //in other words, unite the array elements from the beggining
                nums[counter++]=nums[i];
            }
        }
        //return numbers until the united ones
        return counter;
    }
};