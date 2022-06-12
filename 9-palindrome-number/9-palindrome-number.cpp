class Solution {
public:
    int reverse(int x){
        //initialize two variables-> one for the reversed number, one for the reminder after the division, 
        long long int reverse=0, reminder;
        
        //loop until the given number reachs to zero
        while(x!=0){
            //calculate the reminder after the division
            reminder=x%10;
            //update the reversed number-> the addition of the remider & the last reversed number*10, move one postion left
            reverse=reverse*10+reminder;
            //integer division on the given number
            x/=10;
        }
        //return the reversed number
        return reverse;
    }
    bool isPalindrome(int x) {
        
        //initialize two variables-> one for the reversed number, one to save the original value of the given number
        long long int num=x, temp=reverse(x);
        
        //if the given number is a negative one, return false
        if(x<0){
            return false;
        }
  
        //finally, check if the two numbers, the original one & the reversed one, are equal or not
        if(num==temp||num==temp/10){
            return true;
        }
        else{
            return false;
        }
    }
};