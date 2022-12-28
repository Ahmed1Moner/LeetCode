class Solution {
public:

    //initialize a fixed-size array
    int dp[60];
    
    int helper(int n){
        
        //base case 1
        if(n<=2)
            return 1;
        
        //base case 2, if the element calculated before-> return it
        if(dp[n]!=-1)
            return dp[n];
        
        
        int res=INT_MIN;
        
        //loop over the whole numbers until the given one
        for(int i=1;i<n;i++){
            
            //return the maximum value of calling the helper functions
            //if 4-> (3,1), (2,2), (1,3) 
            res=max(res, max(i*helper(n-i), i*(n-i)));
        
        }
        
        //save the fresh-calculated number's value
        return dp[n]=res;
    }
    
    int integerBreak(int n) {
        
        //fill all the elements of the vector with -1s
        memset(dp, -1, sizeof(dp));
        
        //call the helper function & return the maximum reached counter value
        return helper(n);
    }
};