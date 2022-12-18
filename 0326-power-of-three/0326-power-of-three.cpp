class Solution {
public:
    bool isPowerOfThree(int n) {
        
        //base case 1
        if(n<=0)
            return false;
        
        //base case 2
        if(n==1)
            return true;
            
         //loop & divide the value by 3 while the result is integer
        while(n%3==0)
            
            //recursivelly, call the updated n value
            return isPowerOfThree(n/3);
        
        //after all, if it's not valid, not integer or not divisible by 3-> false
        return false;
    }
};