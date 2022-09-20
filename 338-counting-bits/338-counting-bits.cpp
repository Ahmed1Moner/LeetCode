class Solution {
public:
    vector<int> countBits(int n) {
        
        //initialize a new vector with (n+1) size with initial values of 0s
        vector<int> dp(n+1, 0);
        
        //base case-> zero have no ones
        dp[0]=0;
        //initialize an offset variable to change its value with the pattern
        int offset=1;
        
        /*
        0->00(00)
        1->00(01)
        2->00(10)
        3->00(11)
        
        4->01(00)
        5->01(01)
        6->01(10)
        7->01(11)
        
        8->10(00)
        9->10(01)
        ...
        each time, we're check the posiotion in the pattern & increasing the upcoming value with 1
        */
        
        //loop over the whole number, from 1 to n
        for(int i=1;i<=n;i++){
            
            //check if the double offset value equals the current iterator one
            if(2*offset==i)
                //if yes-> replace the iterator value with the offset one
                offset=i;
            
            //store the value of the old four-values pattern +1 in the correct position
            dp[i]=dp[i-offset]+1;
        }
        
        //return the new vector elements
        return dp;
    }
};