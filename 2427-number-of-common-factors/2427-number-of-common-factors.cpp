class Solution {
public:
    int commonFactors(int a, int b) {
              
        //initialize a counter
        int counter=0;
        
        //loop from 1 until the maximum value between the two integers
        for(int i=1;i<=max(a,b);i++)
            
            //check if the current element is divisible by the two given integers
            if(a%i==0)
                if(b%i==0)
                    //if yes-> add trhe counter by one
                    counter++;
        
        //return the final counter value
        return counter;
    }
};