class Solution {
public:
    int subtractProductAndSum(int n) {
        
        //initialize a sum and product variables
        int sum=0, pro=1;
        
        //loop until the given number comes zero
        while(n!=0){
            //update the sum variable by adding the first digit value
            sum+=n%10;
            //update the product variable by multiplying the first digit value
            pro*=n%10;
            //update the given number by dividing it by 10, remove the first digit, as it's already summed and multiplied
            n/=10;
        }
        
        //return the difference between the product and the sum of its digits
        return pro-sum;
    }
};