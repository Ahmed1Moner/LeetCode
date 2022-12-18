class Solution {
public:
    bool isPowerOfThree(int n) {
        
        //base case
        if(n<=0)
            return false;
        
        //true if the number is divisable by 2 & the last reached value =1
        return ((n==1)||(isPowerOfThree(n/3)==1 && (n%3==0)));
    }
};