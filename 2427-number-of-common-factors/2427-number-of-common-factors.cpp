class Solution {
public:
    int commonFactors(int a, int b) {
              
        //initialize a counter
        int counter=0;
        
        //loop from 1 until the minimum value between the two integers
        for(int i=1;i<=min(a,b);i++)
            //check if the current element is divisible by the two given integers
            //if yes-> add trhe counter by one
            counter+=a%i==0&&b%i==0;

        //return the final counter value
        return counter;
    }
};