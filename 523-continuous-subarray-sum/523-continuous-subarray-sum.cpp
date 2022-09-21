class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        
        //initialize a sum variable with initial value of the first element
        long long sum=nums[0];
        
        //loop over the whole array elements with a pointer, i
        for(int i=1;i<nums.size();i++){
            
            //base case 1: two consecutive zeros-> true
            if(nums[i]==nums[i-1])
                if(nums[i]==0)
                    return true;
            
            sum+=nums[i];
            
            //base case 2: if the sum is divisible by the given k-> true
            if(sum%k==0)
                return true;
            
            //initialize a second pointer, j
            int j=0;
            //save the current sum value in a temp variable
            int temp=sum;
            
            //nested loop with the second pointer when there're at least continuous subarray of size 2
            while((i-j)>1 && temp>=k){
                //subtract the current value from the temp & incremeant the pointer
                temp-=nums[j++];
                
                //base case 3: if the temp is divisible by the given k-> true
                if(temp%k==0)
                    return true;
            }
                    
        }
        
        //after all, if there's no valid one-> false
        return false;
    }
};