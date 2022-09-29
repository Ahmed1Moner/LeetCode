class Solution {
public:
    int countEven(int num) {
     
        int val=num, sum=0;
        
        //loop until the current number value gets 0
        while(num!=0){
            //add the first digit value to the counter
            sum+=(num%10);
            //update the num by removing the first digit
            num/=10;
        }

        //following the sum of the numbers pattern & getting this formula
        return (val-sum%2)/2;
        //return sum%2==0 ? val/2 : (val-1)/2;
    }
};