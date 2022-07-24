class Solution {
public:
    int percentageLetter(string s, char letter) {
        //initialize a counter
        int counter=0;
        
        //loop over the array letters
        for(char let:s)
            //if the current letter is the same as the target one
            if(let==letter)
                //add the counter by one
                counter++;
        
        //retun the percentage of its occurence
        return ((double)counter/(double)s.size())*100;
    }
};