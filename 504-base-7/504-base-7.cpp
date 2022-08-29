class Solution {
public:
    string convertToBase7(int num) {
        
        //initliaze a digit position & sum variables
        int res=0, digit=1;
        
        //loop until the given number becomes zero
        while(num!=0){    
            //update the result by the remainder of division by 7 multiplied by the current digit position
            res+=digit*(num%7);
            //update the number to its divisible by 7
            num/=7;
            //move to the next digit position-> ones, tens, hunderds, thousands...
            digit*=10;
        }
        
        //convert the final result integer to string
        return to_string(res);
    }
};