class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) {
        
        //initialize a counter & a boolean flag
        int counter=0;
        bool check=false;
        //base case-> if it's only one digit-> 1-bit character, return true
        if(bits.size()==1) return true;
        
        //loop over the whole array elements
        while(counter<bits.size()){
            //if the current digit equals to 0-> add the counter by 1 & 1-bit character-> change the flag to true
            if(bits[counter]==0){
                check=true;
                counter++;
            }
            //if it equals to 1 ->add the counter by 2, skip two digits & 2-bit character-> flag is false
            else{
                check=false;
                counter+=2;
            }
        }
        
        //after that-> return the flag value
        return check;
    }
};