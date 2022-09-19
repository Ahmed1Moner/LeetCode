class Solution {
public:
    
    int minimumAverageDifference(vector<int>& nums) {
        
        //initialize two sum variables-> one from the left or start & one from the right or end
        long long sumLeft=0, sumRight=0, minAvg=INT_MAX, index=0;
        
        //loop to get the sumRight value
        for(int num:nums)
            sumRight+=num;
    //btw, you can use {sumRight=accumulate(nums.begin(), nums.end(), 0LL)} instead
        
    //loop over the whole array elements
        for(int i=0;i<nums.size();i++){
            
            //add the current value to the left sum-> (i+1) elements
            sumLeft+=nums[i];
            //subtract the current value from the right sum-> (n-i-1) elements
            sumRight-=nums[i];
            
            //average for the left sum-> sum value / the number of left elements
            int avgLeft=sumLeft/(i+1);
            //average for the right sum-> sum value / the number of right elements & if you're in the last position-> avg will be 0
            int avgRight= (i==nums.size()-1) ? 0 : sumRight/(nums.size()-i-1);
            
            
            //check if the absolute difference between the two averages is smaller than the lowest possible avg
            if(abs(avgLeft-avgRight) < minAvg){
                //replace the avg value with the lower one
                minAvg=abs(avgLeft-avgRight);
                //also, save the current index of the lower one
                index=i;
            }
            
        }
        
    //return the lowest index value
        return index;
    }
};