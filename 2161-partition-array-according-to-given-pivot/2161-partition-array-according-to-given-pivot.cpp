class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        
        //initialize a new array
        vector<int> res;
        
        //loop over the whole array elements
        for(int num:nums)
            //check if the current value is smaller than the pivot
            if(num<pivot)
                //append it in the new array
                res.push_back(num);
        
        //loop over the whole array elements, again
        for(int num:nums)
            //check if the current value equals to the pivot
            if(num==pivot)
                //append it in the new array
                res.push_back(num);
        
        //loop over the whole array elements, again
        for(int num:nums)
            //check if the current value is greater than the pivot
            if(num>pivot)
                //append it in the new array
                res.push_back(num);
        
        //return the new array elements
        return res;
    }
};