
class Solution {
public:
    int numberOfMatches(int n) {
        
        //initialize a number of matches counter
        int matches=0;
        
        //loop until the given number becomes 1
        while(n!=1){
            
            //check if the number of the teams is even number
            if(n%2==0){
                //update the matches by the half of the teams
                matches+=(n/2);
                //update the teams number to the half
                n/=2;
            }
            //check if the number of the teams is odd number
            else{
                //update the matches by the given formula
                matches+=(n-1)/2+1;
                //update the teams number to the half after removing 1 to be even, btw if we don't subtract 1-> true as the integer division in C++ return only the int value
                n=(n-1)/2;
            }
        }
        
        //return the total number of the matches
        return matches;
    }
};


// class Solution {
// public:
//     int numberOfMatches(int n) {
        
//         /*there's only one team will win all the matches -> you need n-1 number of matches to select the winner one ->the total number of the teams will be just n-1*/
//         return n-1;
//     }
// };
