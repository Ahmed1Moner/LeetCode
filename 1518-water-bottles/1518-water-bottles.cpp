class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        
        int total=numBottles;
        int remainder=0;
        
        while(numBottles>=numExchange){
            remainder=numBottles%numExchange;
            total+=numBottles/numExchange;
            numBottles/=numExchange;
            numBottles+=remainder;
        }
        
        
        return total;
    }
};