class Solution {
public:
    bool isPowerOfTwo(int n) {
        
        //base case
        if(n<=0)
            return false;
        
        //true if the value of log base 2 (number) is integer
        return (log2(n) == floor(log2(n)));
    }
};