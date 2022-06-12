class Solution {
public:
    int reverse(int x) {
        //initialize two variables-> one for the reversed number, one for the remmider of the devision
        long long int reverse=0, reminder, range= pow(2,31);
        
        //loop until the given number reachs to zero
        while(x!=0){
            //calculate the reminder after the division
            reminder=x%10;
            //update the reversed number-> the addition of the remider & the last reversed number*10, move one postion left
            reverse=reverse*10+reminder;
            //integer division on the given number
            x/=10;

        }
        
        //check if the reversed number out of the limits-> put it as a zero
        if(reverse < -range || reverse > range-1)
            return 0;
        
        //return the reversed number
        return reverse;
    }
};

