class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        
        //initialize three maximum variables, first & second & third
        int max1=INT_MIN,max2=INT_MIN,max3=INT_MIN;
        int min1=INT_MAX, min2=INT_MAX;
        
        //loop over the whole array elements
        for(int n:nums){
        //for positive values
            
            //case 1: if the current number is larger than the max one & the second & the third, too
            if(n>=max1){
                //replace values from each two variables to avoid trashing them
                max3=max2;
                max2=max1;
                max1=n;
            }
            //case 2: if the current number is more than the second max one & the third, too
            else if(n>=max2){
                max3=max2;
                max2=n;
            }
            //case 3: if the current number is only more than the third max one 
            else if(n>=max3)
                max3=n;
            
        //for negative values
            //case 1: if the current number is smaller than the min one & the second, too
            if(n<=min1){
                //replace values from each two variables to avoid trashing them
                min2=min1;
                min1=n;
            }
            //case 2: if the current number is only less than the second min
            else if(n<=min2)
                min2=n;
        }
        
        //return the product of either the three max ones || the two smaller ones, negative value and with the first max one
        return max((max1*max2*max3), (min1*min2*max1));
    }
};