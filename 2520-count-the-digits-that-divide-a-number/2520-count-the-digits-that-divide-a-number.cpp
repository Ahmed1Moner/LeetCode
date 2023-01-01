class Solution {
public:
    int countDigits(int num) {
        
        //initialize a counter & save the given number
        int counter=0;
     
        //loop over the whole number's digit
        for(int i=num;i!=0;i/=10)
            //check if the given number is divisable by the current digit
            //if yes-> add the counter by 1
            counter+=num%(i%10)==0;
        
        //return the final counter value
        return counter;
    }
};