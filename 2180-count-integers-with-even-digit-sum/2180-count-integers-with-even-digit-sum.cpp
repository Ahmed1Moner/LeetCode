class Solution {
public:
    int countEven(int num) {
     
        //initialize a counter
        int counter=0;
        
        //loop over the whole numbers from 1 to the given number
        for(int i=1;i<=num;i++){

            //initialize a temporary sum 
            int sum=0, val=i;
            
            //loop until the current number value gets 0
            while(val!=0){
                //add the first digit value to the counter
                sum+=(val%10);
                //update the num by removing the first digit
                val/=10;
            }
            
            //check if the final sum of each loop is even
            if(sum%2==0)
                //if yes-> add the coutner by one
                counter++;
        }
        
        //return the final counter value
        return counter;
    }
};