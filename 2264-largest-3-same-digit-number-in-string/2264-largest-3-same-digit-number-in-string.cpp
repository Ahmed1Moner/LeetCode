class Solution {
public:
    string largestGoodInteger(string num) {
        //initialize an empty maximum string
        string max="";
        
        //loop over the whole string letters until the second last one
        for(int i=0;i<num.size()-2;i++){
            
            //check if the current & the next && the next next ones are equal
            if(num[i]==num[i+1] && num[i+1]==num[i+2]){
                
                //store letters from the i position with 3 letters after that
                string temp=num.substr(i,3);
                
                //only store the maximum number, ignore the smaller ones
                if(temp>max)
                    max=temp;
            }
        }
        
        //return the maximum number value
        return max;
    }
};