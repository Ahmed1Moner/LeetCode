class Solution {
public:    
    int dp[12+1][10000+1];
    
    int findLowestCoins(vector<int> &coins, int i, int amount) {
        
        //base case
        if (i == coins.size() || amount <= 0)
            return (amount == 0) ? 0 : INT_MAX - 1;   
        
        //base case 2
        if (dp[i][amount] != -1)
            return dp[i][amount];
        
        int res = -1;
        
        //recursive case
        if (coins[i] > amount) {
            int doNotTakeCoin = 0 + findLowestCoins(coins, i + 1, amount);
            dp[i][amount] = res = doNotTakeCoin;
        }
        else {
            int takeCoin = 1 + findLowestCoins(coins, i, amount - coins[i]);
            int doNotTakeCoin = findLowestCoins(coins, i + 1, amount);
            dp[i][amount] = res = min(takeCoin, doNotTakeCoin);
        }
        
        return dp[i][amount] = res;
    }
    
    int coinChange(vector<int>& coins, int amount) {
        
        memset(dp, -1, sizeof(dp));
        int res = findLowestCoins(coins, 0, amount);
        return (res == INT_MAX - 1 ) ? -1 : res;
    }
};