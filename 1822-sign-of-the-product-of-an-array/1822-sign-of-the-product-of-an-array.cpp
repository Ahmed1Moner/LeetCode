class Solution {
public:
    int arraySign(vector<int>& nums) {
        
        //to avoid overflow, we'll not use the method where product all array values & then check coditions
        
        //initialize a sign variable 
        int sign=1;
        
        //loop over the whole array elements
        for(int num:nums){
            //check if there's any 0-> product=0 & return 0
            if(num==0)
                return 0;
            //check if there's negative value-> product will be negative-> return -1
            if(num<0)
                sign*=-1;
        }
        
        //if all are positive | there're even number of negative values-> positive & return 1
        return sign;
    }

};