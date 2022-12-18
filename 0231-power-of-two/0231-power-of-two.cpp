class Solution {
public:
    bool isPowerOfTwo(int n) {
        
        //base case
        if(n==0)
            return false;
        
        //loop & divide the value by 2 while the result is integer
        while(n%2==0)
            n/=2;
        
        //true if the last result is 1
        return n==1;
    }
};