class Solution {
public:
    
    vector<int> countBits(int n) {
        
        //initialize a new vector with (n+1) size with initial values of 0s
        vector<int> ans(n+1,0);
        
        //loop over the whole number, from 0 to n
        for(int i=0;i<=n;i++){
            
            //initialize a counter & quotient & remainder variables
            int counter=0, rem=0, que=i;
            
            //loop until the queotient gets zero
            while(que!=0){
                
                //update the remainder value by the modulus value 
                rem+=(que%2);
                //save the value in the new vector
                ans[i]=rem;
                //update the que value by dividing by 2
                que/=2;
            }
        }
        
        //return the new vector values
        return ans;
    }
};