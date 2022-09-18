class Solution {
public:
    int smallestEvenMultiple(int n) {
        
        //check if the given value is an even one
        if(n%2==0)
            //return it-> divisible by 2 & itself
            return n;
        
        else
            //if odd-> return its double value, to be even & divisible by the two values
            return 2*n;
        
    }
};