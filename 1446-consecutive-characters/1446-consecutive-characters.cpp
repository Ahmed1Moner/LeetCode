class Solution {
public:
    int maxPower(string s) {
        //initialize  a counter & maximum variables
        int counter=1, max=0;
        //loop over the whole string letters
        for(int i=0;i<s.length();i++){
            //check if the current letter is the same as the next one
            if(s[i]==s[i+1])
                //if yes->add the counter by one
                counter++;
            else
                //if no-> return to its default value
                counter=1;
            //compare the current counter value with max, save the max one
            if(counter>max)
                max=counter;
        }
        //return the maximum value
        return max;
    }
};