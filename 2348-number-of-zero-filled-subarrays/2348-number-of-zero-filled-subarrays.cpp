
class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        
        //initialize a subarrays counter
        long long counter=0;
        
        //loop over the whole array elements with two pointers
        for(int i=0, j=0;i<nums.size();i++){
            //if the current element doesn't equal to 0
            if(nums[i]!=0)
                //move the second pointer to the next position
                j=i+1;
            //add the counter by the value of length between the two pointers+1
            counter+= abs(i-j+1);
        }
        
        //return the final number of subarrays
        return counter;
        
    }
};


// class Solution {
// public:
//     long long zeroFilledSubarray(vector<int>& nums) {
        
//         //initialize a subarrays counter
//         int counter=1;
//         long long max=0;
        
//         //loop over the whole array elements
//         for(int i=0;i<nums.size();i++){
//             //check if the current element equals 0-> add the counter by 1 & add the maximum counter by the last counter value
//             if(nums[i]==0){
//                 max+=counter;
//                 counter++;
//             }
//             //if not, doesn't equal to 0-> return the counter value back to 0 
//             else{
//                 counter=1;
//             }
            
//         }
        
//         //return the final number of subarrays
//         return max;
        
//     }
// };
