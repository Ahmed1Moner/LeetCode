class Solution {
public:
    int fib(int n) {
       
        //base case 1: if n=0-> 0 | n=1-> 1
        if(n==0 || n==1)
            return n;
        
        //initialize a new vector with an extra one space bigger than the given number & filled with -1s
        vector<int> dp(n+1, -1);
        
        //base case 2: first two positions have their initlia values 
        dp[0]=0,  dp[1]=1;
        
        //loop until reaching the given number
        for(int i=2;i<=n;i++)
            //save the current value by the sum of the last two values
            dp[i]=dp[i-1]+dp[i-2];
        
        //return the value of the last number in the new vector
        return dp[n];
    }
};