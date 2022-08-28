class Solution {
public:
    bool isThree(int n) {
        
        //initialize a counter
        int counter=0;
        
        //loop starting from 1 until the given number
        for(int i=1;i<n+1;i++)
            //if the given number is divisible by the iteratorvalue
            if(n%i==0)
                //add the counter by one
                counter++;
        
        //if the counter value is exactly 3 times-> return true, else-> return false
        return counter==3;
    }
};