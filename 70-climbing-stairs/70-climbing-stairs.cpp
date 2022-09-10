class Solution {
public:
    
    int helper(vector<int> &dp, int n){
        
        //handle invalid cases
        if(n<0)
            return 0;
        //base case 1: if reached 0 or 1-> 1 
        if(n==0 || n==1)
            return 1;
        //base case 2: if the position reached before-> return its result immediately
        if(dp[n]!=-1)
            return dp[n];
        //the current position will be the sum of the last two ones
        return dp[n]=helper(dp, n-1) + helper(dp, n-2);
        
    }
        
    int climbStairs(int n) {

        //initialize a new vector with an extra one space bigger than the given number & filled with -1s
        vector<int> dp(n+1, -1);
        //return the result of calling the helper function
        return helper(dp, n);
        
    }
};


// class Solution {
// public:
//     int climbStairs(int n) {
        
//         //initialize two variables base cases
//         int one=1, two=1;
        
//         //loop until reaching the given number-> tabulation, bottom-up
//         for(int i=2;i<=n;i++){
//             //save the one value in temp variable
//             int temp=one;
//             //update the one value by adding the last one and current two values
//             one+=two;
//             //update the two value by the old one variable value
//             two=temp;
//         }
        
//         //return the last reached value
//         return one;
//     }
// };