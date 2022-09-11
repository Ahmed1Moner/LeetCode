//tabulation
class Solution {
public:
    int tribonacci(int n) {
        
        //initialize an array of -1s
        int dp[38]={-1};
        
        //initial values of the base cases
        dp[0]=0;dp[1]=1;dp[2]=1;
        
        //loop over the whole array & adding the last three numbers of the given number
        for(int i=3;i<=n;i++)
            dp[i]=dp[i-1]+dp[i-2]+dp[i-3];
        
        //return the value of the last position reached in the array
        return dp[n];
        
    }
};


//memoization
// class Solution {
// public:
    
//     //initialize an array of -1s
//     int dp[38]={-1};

//     int tribonacci(int n) {
        
//         //handle invalid cases
//         if(n<=0)
//             return 0;
//         //base case 1: if n=1 | n=2-> 1
//         if(n==1 || n==2)
//             return 1;
//         //base case 2: if the position reached before-> return its result immediately
//         if(dp[n]!=0)
//             return dp[n];
        
        
//         //the current position will be the sum of the last three ones
//         return dp[n]=tribonacci(n-1)+tribonacci(n-2)+tribonacci(n-3);
//     }
// };

//Recursion

// class Solution {
// public:
    
//     int tribonacci(int n) {
        
//         //handle invalid cases
//         if(n<=0)
//             return 0;
//         //base case 1: if n=1 | n=2-> 1
//         if(n==1 || n==2)
//             return 1;
        
//         //the current position will be the sum of the last three ones
//         return tribonacci(n-1) + tribonacci(n-2) + tribonacci(n-3);
//     }
// };