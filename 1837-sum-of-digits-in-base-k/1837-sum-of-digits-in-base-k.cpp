class Solution {
public:
    
    int sumDigits(int res){
        
        int sum=0;
        
        //loop over the whole number digits
        while(res!=0){
            //update the sum variable by the first digit value
            sum+=(res%10);
            //update the number by dividing it by 10, removing the first summed digit
            res/=10;
        }
        
        return sum;
    }
    
    int base(int n, int k){
        
        //initliaze a digit position & sum variables
        int digit=1, res=0;
        
        //loop until the given number becomes zero
        while(n!=0){
            //update the result by the remainder of division by k multiplied by the current digit position
            res+=digit*(n%k);
            //update the number to its divisible by k
            n/=k;
            //move to the next digit position-> ones, tens, hunderds, thousands...
            digit*=10;
        }
        return sumDigits(res);
    }
    
    int sumBase(int n, int k) {
        
        //call the base function to convert the given number into the desired base which calls the sum digits function to calculate the sum of the result digits
        return base(n, k);
        
    }
};