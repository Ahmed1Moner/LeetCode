class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        
        int total=numBottles;
        int remainder=0;
        
        //loop untile the exchange value become less than the bottles
        while(numBottles>=numExchange){
            
            //save the remainder bottles
            remainder=numBottles%numExchange;
            //add the number of bottles that can be exchanged to the total
            total+=numBottles/numExchange;
            //update the number of bottles
            numBottles/=numExchange;
            //add the remainder to them
            numBottles+=remainder;
        }
        
        //return the final total value
        return total;
    }
};