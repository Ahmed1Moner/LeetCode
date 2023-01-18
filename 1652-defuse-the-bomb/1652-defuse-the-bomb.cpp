class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        
        vector<int> ans(code.size(),0);
        
        //case 1: k=0
        if(k==0)
            return ans;        
        
        //loop over the whole array elements
        for(int i=0;i<code.size();i++){
            
            //case 2: k>0
            if(k>0){
                
                //temporary sum
                int sum=0;
                for(int j=1;j<=k;j++){
                    //temporary circular position calc
                    int temp=i+j;
                    sum+=code[temp%code.size()];
                }
                //push the sum
                ans[i]=sum;
            }
            
            //case 3: k<0
            else if(k<0){

                //temporary sum
                int sum=0;
                for(int j=-1;j>=k;j--){
                    //temporary circular position calc
                    int temp=i+j;
                    if(temp<0)
                        temp+=code.size();
                    sum+=code[temp%code.size()];
                }
                //push the sum
                ans[i]=sum;
            }
            
        }
        
        //return the final sums' values
        return ans;
       
    }
};