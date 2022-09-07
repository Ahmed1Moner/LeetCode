class Solution {
public:
    int countOdds(int low, int high) {
        
        //initialize a counter with the average of the two ranges, which are the number of the odd numbers between btw
        int counter=(high-low)/2;
        
        //check if one of the two ranges is also an odd one
        if(high%2!=0 || low%2!=0)
            //add it to the counter
            counter++;
        
        //return the final counter value
        return counter;
    }
};

// class Solution {
// public:
//     int countOdds(int low, int high) {
        
//         //initialize a counter for the odd numbers
//         int counter=0;
        
//         //loop over the whole numbers from low to high
//         for(int i=low; i<=high;i++)
//             //check if the current number isn't divisible by 2, odd 
//             if(i%2!=0)
//                 //add the counter by one
//                 counter++;
        
//         //return the final counter value
//         return counter;
//     }
// };