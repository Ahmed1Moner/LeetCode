class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int MaxProfit=0;
        int minProfit=prices[0];
        
        //loop over the whole vector elements
        for(int i=0;i<prices.size();i++){
            
            //save the minimum profit reached
            minProfit=min(minProfit, prices[i]);
            //save the maximum profit reached between the max & the min stocks
            MaxProfit=max(MaxProfit, (prices[i]-minProfit));
        }
        
        //return the maximum reached profit
        return MaxProfit;
    }
};