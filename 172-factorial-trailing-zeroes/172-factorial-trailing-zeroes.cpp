class Solution {
public:
    int trailingZeroes(int n) {
        
        /*
        to find the total trailing zeros directly without calculating the actual value of the number's factorial, we just need to count the numebr of the number that produces 10s, which are 2s or 5s.
        5!=5*4*3*2*1 = 120 ->(5)*4*3*2*1-> 1 zero
        10!=10*9*8*7*6*5*4*3*2*1=3628800 ->(10)*9*8*7*6*(5)*4*3*2*1-> 2 zeros
        */
        
        //initialize a zeros counter
        int counter=0;
        
        //loop only over the 5s and their divider digits of the number
        for(int i=5;i<=n;i+=5){
            //loop again over them to calclulate each one trailing zeros, by checking of their remainder by dividing over 5
            int x=i;
            while(x>0 && x%5==0){
                counter++;
                x/=5;
            }
        }
        
        //return the final number of zeros
        return counter;
    }
};