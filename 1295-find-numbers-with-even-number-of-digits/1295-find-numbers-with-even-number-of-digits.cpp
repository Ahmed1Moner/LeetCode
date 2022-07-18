class Solution {
public:
    int findNumbers(vector<int>& nums) {
        //initialize a counter
        int counter=0;
        
        //loop over the whole array elements
        for(int i=0;i<nums.size();i++){
            //convert the integer to string first, then check its length is even or not through the modulus division
            if((to_string(nums[i]).size()%2)==0)
                counter++;
        }
        
        //return the counter value
        return counter;
    }
};
