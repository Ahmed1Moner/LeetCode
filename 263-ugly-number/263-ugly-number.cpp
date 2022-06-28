class Solution {
public:
    bool isUgly(int n) {
        //base cases-> zero || negative value-> false & 1->true
        if(n<=0){return false;}
        if(n==1){return true;}
        
        //repeat the steps until the number gets 1 or less
        while(n>1){
            //test 1-> if the number is divisible by 2-> divide it
            if(n%2==0)
                n/=2;
            //test 2-> if the number is divisible by 3-> divide it
            else if(n%3==0)
                n/=3;
            //test 3-> if the number is divisible by 5-> divide it
            else if(n%5==0)
                n/=5;
            //Except-> if the number isn't divisible by any of them-> not an ugly number
            else
                return false;
        }
        
        //if it passes all the tests-> ugly number
        return true;
    }
};