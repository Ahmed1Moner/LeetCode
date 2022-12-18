class Solution {
public:
    bool isPowerOfTwo(int n) {
        
        //base case
        if(n==0)
            return false;
        
        //true if the number is divisable by 2 & the last reached value =1
        return ((n==1)||(isPowerOfTwo(n/2)==1 && (n%2==0)));
    }
};