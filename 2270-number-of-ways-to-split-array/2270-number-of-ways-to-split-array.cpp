class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        
        //initialize two sum variables-> one from the left or start & one from the right or end
        long long counter=0, sumLeft=0, sumRight=accumulate(nums.begin(), nums.end(), 0LL);
        
        //btw, you can use this loop to get the sumRight value instead
//         for(int num:nums)
//             sumRight+=num;
        
        //loop over the whole array elements except the last one, as the element must have a right one 
        for(int i=0;i<nums.size()-1;i++){
            
            //add the current value to the left sum-> (i+1) elements
            sumLeft+=nums[i];
            //subtract the current value from the right sum-> (n-i-1) elements
            sumRight-=nums[i];
            
            //check if the left sum greater than or equal the right one
            if(sumLeft>=sumRight)
                //add the counter by one
                counter++;
        }
        
        //return the final counter value
        return counter;
    }
};