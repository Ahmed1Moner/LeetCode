class Solution {
public:
    
    int helper(long n, int counter){
        
        //base case, if we reaches 1-> return the counter value
        if(n==1)
            return counter;
        
        //case 1: even number
        if(n%2==0)
            return helper(n/2, counter+1);
        
        //case 2: odd number
        else
            return min(helper(n+1, counter+1), helper(n-1, counter+1));
        
    }
    
    int integerReplacement(int n) {
        
        //call the helper function with initial value of 0 for counter
        return helper(n, 0);
    }
};