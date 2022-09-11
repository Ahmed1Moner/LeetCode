class Solution {
public:
    int countHillValley(vector<int>& nums) {
        
        //initialize a counter for both hills and valleys
        int counter=0;
        
        //initialize a new vector for the non-repeated numbers
        vector<int> res;
        
        //save the first array value as the first unique one
        int temp=nums[0];
        res.push_back(temp);
        
        //loop over the whole array elements
        for(int num:nums)
            
            //check if the current one doesn't equal to the last saved value
            if(num!=temp){
                //add the non-repeated number to the new array
                res.push_back(num);
                //update the temp pointer to the last unique number 
                temp=num;
            }
    
        //loop over the whole unique array numbers        
        for(int i=1;i<res.size()-1;i++)
            
            //check of the two conditions: if their both neighbors are greater-> hill++ | both are smaller-> valley++ -> or counter++ for simplicity
            if(res[i]>res[i+1] && res[i]>res[i-1] || res[i] < res[i+1] && res[i]<res[i-1])
                counter++;
        
        //return the hill+vally values-> general counter value
        return counter;
    }
};