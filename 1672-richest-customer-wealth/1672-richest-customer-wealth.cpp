class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maximum=0;
        
        //loop over the whole array rows
        for(int i=0;i<accounts.size();i++){
            //return the sum variable value back to 0 with each new iteration
            int sum=0;
            
            //loop over the whole array columns
            for(int j=0;j<accounts[i].size();j++)
                //add all column values of each row to the sum variable
                sum+=accounts[i][j];

            //comparing & storing the largest value 
            maximum=max(sum, maximum);
    
        }
        //return the largest possible wealth value
        return maximum;
    }
};