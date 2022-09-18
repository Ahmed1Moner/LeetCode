class Solution {
public:
    
    bool helper(vector<int>& nums, int threshold, int mid, int sum){
                
        //loop over the whole array element each time
        for(int num:nums){
            //check if the current element is divisble by the selected divisor
            if(num%mid==0)
                //if yes-> add the divisor value to the sum variable
                sum+=(num/mid);
            else
                //if no-> add one to the result
                sum+=(num/mid)+1;
        
//             OR use this formula, ceil division-> add the divisor value to the sum variable
//                 sum+=(num+mid-1)/mid;
        
        }
        
        //return true if the final sum value is smaller than the given threshold
        return sum>threshold;        
    }
    
    int smallestDivisor(vector<int>& nums, int threshold) {
        
        //initialize two main pointer-> one on the lowest possible answer value & one on the largest
        int left=1, right=*max_element(nums.begin(), nums.end());
        
        //loop while the left pointer is before the right one
        while(left<right){
            
            //the third pointer mid-> is exactly the middle element between the main two ones
            int mid=left+(right-left)/2, sum=0;
            
            
            //then, check if the final sum is greater than the given threshold-> divisor is still small
            if(helper(nums, threshold, mid, sum))
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