class Solution {
public:
    int countDigits(int num) {
        
        //initialize a counter & save the given number
        int counter=0;
        int temp=num;
        int temp2=0;
        
        //loop over the whole number's digit
        while(num!=0){
            
            //save the current digit of the number
            temp2=num%10;
            //check if the given number is divisable by the saved current digit
            if(temp%temp2==0)
                //if yes-> add the counter by 1
                counter++;
            
            //update the number's value by removing a digit
            num/=10;
        }
        
        //return the final counter value
        return counter;
    }
};