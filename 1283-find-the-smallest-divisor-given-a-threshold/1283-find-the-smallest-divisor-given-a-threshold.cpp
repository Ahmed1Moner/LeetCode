class Solution {
public:
    
    
    int smallestDivisor(vector<int>& nums, int threshold) {
        
        //initialize two main pointer-> one on the lowest possible answer value & one on the largest
        int left=1, right=1e6;
        
        //loop while the left pointer is before the right one
        while(left<right){
            
            //the third pointer mid-> is exactly the middle element between the main two ones
            int mid=left+(right-left)/2, sum=0;
            
            //loop over the whole array element each time
            for(int num:nums)
                //use this formula, ceil division-> add the divisor value to the sum variable
                sum+=(num+mid-1)/mid;
        
            //then, check if the final sum is greater than the given threshold-> divisor is still small
            if(sum>threshold)
                //case 1: if yes-> move the left pointer to the position after the mid one
                left=mid+1;
            else
                //case 2: if no-> move the right pointer to the mid position
                right=mid;
                
        }
        
        //return the left position 
        return left;
    }   
};