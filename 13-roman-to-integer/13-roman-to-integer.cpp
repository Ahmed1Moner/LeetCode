class Solution {
public:
    //using if-else codition
    
    //function to store each prefix value
    int prefix(char p){
            if(p=='I'){
                return 1;
            }
            if(p=='V'){
                return 5;
            }
            if(p=='X'){
                return 10;
            }
            if(p=='L'){
                return 50;
            }
            if(p=='C'){
                return 100;
            }
            if(p=='D'){
                return 500;
            }
            if(p=='M'){
                return 1000;
            }
        return 1;
    }
    
    int romanToInt(string s) {
        //initialize a variable to store the final summition
        int sum=0;
        //loop over the letters of the word, letter by letter
        for(int i=0;i<s.length();i++){
            //compare the last two letters, if the most significant one is more than the one after-> add them
            if(prefix(s[i])>=prefix(s[i+1])){
                sum+=prefix(s[i]);
            }
            //if it's smaller than the one after, the smaller comes first-> subtract the smaller from the bigger one-> add them
            else{
                sum+=prefix(s[i+1])-prefix(s[i]);
                //as you subtract two letters-> add an extra step
                i++;
            }
        }
        return sum;
    }
};

