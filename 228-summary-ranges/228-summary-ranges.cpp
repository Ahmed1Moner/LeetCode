class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        
        vector<string> res;
        
        //loop over the whole arary elements
        for(int i=0;i<nums.size();i++){
            
            //initialize another pointer (j) besides the main pointer (i)
            int j=i;
            string temp="";
            
            //move with the pointer j while the numbers sorted ascendily corrent, until finding a missing element & the coming move must be in the range of the current vector
            while(j+1 < nums.size() && nums[j+1]==nums[j]+1)
                j++;
            
            //if the two pointers points on different positions-> add the two range numbers in the required form
            if(j!=i){
            temp+=to_string(nums[i]);
            temp+="->";
            temp+=to_string(nums[j]);
            }
            
            //if they points on the same element ->add only one value
            else
                temp+=to_string(nums[i]);

            //add the string with the range values to the vector
            res.push_back(temp);
            //make the main pointer points on the last taken number
            i=j;
        }
        
        //return the new array values
        return res;
        
    }
};