class Solution {
public:
    int countOdds(int low, int high) {
        
        //initialize a counter for the odd numbers
        int counter=0;
        
        //loop over the whole numbers from low to high
        for(int i=low; i<=high;i++)
            //check if the current number isn't divisible by 2, odd 
            if(i%2!=0)
                //add the counter by one
                counter++;
        
        //return the final counter value
        return counter;
    }
};