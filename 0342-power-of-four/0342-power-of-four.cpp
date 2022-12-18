class Solution {
public:
    bool isPowerOfFour(int n) {
        
        //base case
        if(n<=0)
            return false;
        
        //loop & divide the value by 4 while the result is integer
        while((n%4)==0)

            //recursivelly, call the updated n value
            return isPowerOfFour(n/4);
        
        //true if we reached 1 at the end
        return n==1;
    }
};