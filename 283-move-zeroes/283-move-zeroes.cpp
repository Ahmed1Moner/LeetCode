class Solution {
public:
    void moveZeroes(vector<int>& nums) {
    //using two-pointers approach
        //initialize the first pointer with name index
        int index=0;
        //loop over the whole array elements, deal with i as the second pointer
        for(int i=0;i<nums.size();i++){
            //loop until finding the value of the second pointer doesn't equal to zero
            //swap its value with the first pointer value & move the first pointer by one place
            if(nums[i]!=0){
                nums[index++]=nums[i];
            }
        }
        //after moving all the non-zero elements to the beggining of the array, 
        //assign the values of the numbers after the first pointer to zeros
        for(int j=index;j<nums.size();j++){
            nums[j]=0;
        }
    }
    };
