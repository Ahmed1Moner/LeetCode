class Solution {
public:
    
    bool palidrome(int n){
        //initialize two variables-> one for the reversed number, one for the reminder after the division, 
        int reverse=0, remainder=0;
      
        //loop until the given number reachs to zero
        while(n!=0){
            //calculate the reminder after the division
            remainder=n%10;
            //update the reversed number-> the addition of the remider & the last reversed number*10, move one postion left
            reverse+=10*remainder;
            //integer division on the given number
            n/=10;
        }
        
        //return true if the two numbers match
        return reverse==n;
    }

    bool bases(int n){
        
        //initialize a boolean flag
        bool ok=true;
        
        //loop over the whole numbers starting from 2 until tha n-2 inclusive
        for(int i=2;i<=n-2;i++){
            
            //check all bases using a loop
            
            //initliaze a digit position & sum variables
            long long res=0, digit=1;
            
            //loop until the given number becomes zero
            while(n!=0){
                //update the result by the remainder of division by the iterator value multiplied by the current digit position
                res+=digit*(n%i);
                //update the number to its divisible by the iterator value
                n/=i;
                //move to the next digit position-> ones, tens, hunderds, thousands...
                digit*=10;
            }
            
            //check before the next base-checking if the current result is palindrome or not by calling the palindrome function
            if(!palidrome(res)){
                //if not-> break out of the loop
                ok=false;
                break;
            }
        }
        
        //if you're breaked-> false
        if(!ok)
            return false;
        else
            return true;
    }
        
    bool isStrictlyPalindromic(int n) {    
        
        //call the bases function first which calls the palindrome function second and then return its boolean value
        return bases(n);
    }
};