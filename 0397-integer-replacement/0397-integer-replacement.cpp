class Solution {
public:
    
    //initialize a map
    map<int, int> dp;
    
    long helper(long n){
        
        //base case, if we reaches 1-> return the counter value in the map
        if(n==1)
            return dp[n];
        
        //check if the number calculated already or not
        if(dp[n]==NULL){
            
            //case 1: even number
            if(n%2==0)
                dp[n]=1+helper(n/2);
          //case 2: odd number
            else
                dp[n]=1+min(helper(n+1), helper(n-1));
        }
        
        //if yes-> return it
        return dp[n];
    }
    
    int integerReplacement(int n) {
        
        //call the helper function with initial value of 0 for counter
        return helper(n);
    }
};