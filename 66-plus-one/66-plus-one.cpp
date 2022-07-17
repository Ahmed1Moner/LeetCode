class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {    
        
        //loop over the whole elements from the end to the beggining
        for(int i=digits.size()-1;i>=0;i--){
            //check if the least significant digit is less than 9
            if(digits[i]!=9){
                //if yes->just increase it by one & return it
                digits[i]++;
                return digits;
                break;
            }
            //if no->replace it by zero & continue looping
            else{
                digits[i]=0;
            }
        }
        //in case if the all elemets are 9-> make the first/most significant element 1 & add a zero digit to the number to the end of it
        digits.push_back(0);
        digits[0]=1;
        return digits;
    }
};
