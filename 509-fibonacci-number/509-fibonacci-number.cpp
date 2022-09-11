class Solution {
public:
    
    //initialize an array of zeros
    int dp[31]={0};

    int fib(int n) {
        
        //handle invalid cases
        if(n<0)
            return 0;
        
        //base case 1: if reached 0 or 1-> n
        if(n==0 || n==1)
            return n;
        //base case 2: if the position reached before-> return its result immediately
        if(dp[n]!=0)
            return dp[n];
        
        //the current position will be the sum of the last two ones
        return dp[n]=fib(n-1)+fib(n-2);
        
    }
    
};


// class Solution {
// public:
//     int fib(int n) {
        
//         //handle invalid cases
//         if(n<0)
//             return 0;
//         //base case 1: if n=0-> 0 | n=1-> 1
//         if(n==0 || n==1)
//             return n;
        
//         //recursion case: return the sum of the last two number values
//         return fib(n-1)+fib(n-2);
//     }
// };


// class Solution {
// public:
//     int fib(int n) {
       
//         //base case 1: if n=0-> 0 | n=1-> 1
//         if(n==0 || n==1)
//             return n;
        
//         //initialize a new vector with an extra one space bigger than the given number & filled with -1s
//         vector<int> dp(n+1, -1);
        
//         //base case 2: first two positions have their initlia values 
//         dp[0]=0,  dp[1]=1;
        
//         //loop until reaching the given number
//         for(int i=2;i<=n;i++)
//             //save the current value by the sum of the last two values
//             dp[i]=dp[i-1]+dp[i-2];
        
//         //return the value of the last number in the new vector
//         return dp[n];
//     }
// };