class Solution {
public:
    
    int helper(int n, int i){
        
        //base case 1, if we reaches 1-> return the maximum counter value
        if(n == 0) return 1;
        //base case 2, if we gets a negative number-> break
        if(n < 0 || i <= 0) return 0;
        
        //return the maximum value of calling the helper functions
        //if 4-> (3,1), (2,2), (1,3) 
        //by default, decremeant i by 1 & multiply the current i*n-i
        return max(helper(n, i-1), i*helper(n-i, i));
               
    }
    
    int integerBreak(int n) {
        
        //call the helper function
        return helper(n, n-1);
    }
};