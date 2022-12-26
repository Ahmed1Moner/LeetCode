class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        
        int min1=INT_MAX;
        int min2=INT_MAX;
        
        //loop over the whole vector elements
        for(int num:nums){
            
            //case 1: save the minimum reached value until now
            if(num<min1)
                min1=num;
            
            //case 2: save the second consecutive minimum reached value until now
            else if(num>min1 && num<min2)
                min2=num;
      
            //case 3: if the new number is still larger than the second minimum one-> true
            else if(num>min2)
                return true;
            
        }
        
        //otherwise, false
        return false;
    }
};