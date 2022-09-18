class Solution {
public:
    int smallestEvenMultiple(int n) {
        
        /*check if the given value is an even one
        return it-> divisible by 2 & itself
        if odd-> return its double value, to be even & divisible by the two values
        */
        
        return n%2==0 ? n : n*2;
        
    }
};