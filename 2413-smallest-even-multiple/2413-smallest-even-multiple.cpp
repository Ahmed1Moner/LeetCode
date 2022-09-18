class Solution {
public:
    int smallestEvenMultiple(int n) {
        
        //loop over the whole integer values
        for(int i=1;i<=INT_MAX;i++)
            
            //check first if the current value is divisible by 2
            if(i%2==0)
                //if yes-> then, check if it's divisible by the given n, too
                if(i%n==0)
                    //if yes-> return the valid i value
                    return i;
        
        //if no, for both two conditions-> return 0
        return 0;
    }
};