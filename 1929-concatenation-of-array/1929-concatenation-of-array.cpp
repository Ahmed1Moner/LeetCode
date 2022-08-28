class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        
        int n=nums.size();
        //initialize a new array with a double size of the old one with initial values of zeros
        vector<int> ans (n*2);
        
        //loop over the whole array elements
        for(int i=0;i<n;i++){
            //copy the old values to the new array in the same position
            ans[i]=nums[i];
            //copy the same old values to the new array but in the position after the end of the old ones
            ans[i+n]= nums[i];
        }
        
        //return the new array elements
        return ans;
    }
};


// class Solution {
// public:
//     vector<int> getConcatenation(vector<int>& nums) {
        
//         int n=nums.size();
        
//         //loop over the whole array elements
//         for(int i=0;i<n;i++)
//             //copy element by element from the array to the end
//             nums.push_back(nums[i]);
        
//         //return the modified array
//         return nums;
//     }
// };