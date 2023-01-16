class Solution {
public:
    string longestPalindrome(string s) {
        
        //initialize a 2-d matrix with 0s
        int size=s.size();
        bool dp[size][size];
        memset(dp, 0, sizeof(dp));
        
    //for one letter only -> diagonal with 1s
        for(int i=0;i<size;i++)
            dp[i][i]=1;
        
        
        //a temporary string to be updated with the longest reached one
        string ans="";
        ans+=s[0];
        
    //for more than 1 letter
        
        //loop over the rows
        for(int i=size-1;i>=0;i--){
            
            //loop over the columns
            for(int j=i+1;j<size;j++){
                
                //the strat and the end letters are equal
                if(s[i]==s[j]){
                    
                    if(dp[i+1][j-1] || j-i==1){
                        
                        //box is true
                        dp[i][j]=1;

                        //if the distance value is more than the current string-> update it
                        if(j-i+1 > ans.size())
                            ans=s.substr(i, j-i+1);
                    }
                    
                }
            }
        }
        
        
        //return the longest palindromic substring
        return ans;
    }
};