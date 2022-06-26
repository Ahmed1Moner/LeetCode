class Solution {
public:
    int titleToNumber(string columnTitle) {
        //Initialize a two variables for sums
        int totalSum=0;
        int partialSum=0;
        
        //loop over the whole string letters
        for(int i=0;i<columnTitle.size();i++){
            //subtract the value of letter 'A' & add 1 || subtract from 'B' & add 2
            partialSum=columnTitle[i]-'A'+1;
            //add the partial sum to the multiplication of 26 by the second letter, if found
            totalSum=partialSum+26*totalSum;
        }
        //return the total sum
        return totalSum;
    }
};

 