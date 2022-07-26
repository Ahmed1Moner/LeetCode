class Solution {
public:
    int countPairs(vector<int>& nums, int k) {
        
        //initialize a counter variable
        int counter=0;
        
        //loop over the whole array elements
        for(int i=0;i<nums.size();i++){
            //loop again over them to compare
            for(int j=0;j<nums.size();j++){
                //condition 1: j is always smaller than i
                if(i>=j)
                    continue;
                
                //condition 2: the two numbers are equal
                if(nums[i]==nums[j])
                    //condition 3: (i*j) is divisible by the given number k
                    if ((i*j)%k==0)
                        //all conditions are passed-> add the counter by one
                        counter++;
            }
        }
        
        //return the counter value
        return counter;
    }
};