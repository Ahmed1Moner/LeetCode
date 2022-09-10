class Solution {
public:
    int climbStairs(int n) {
        
        //initialize two variables base cases
        int one=1, two=1;
        
        //loop until reaching the given number-> tabulation, bottom-up
        for(int i=2;i<=n;i++){
            //save the one value in temp variable
            int temp=one;
            //update the one value by adding the last one and current two values
            one+=two;
            //update the two value by the old one variable value
            two=temp;
        }
        
        //return the last reached value
        return one;
    }
};