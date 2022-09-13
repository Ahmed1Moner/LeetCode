class Solution {
public:
    
    //helper function to check if the given number passes all the conditions or not
    bool valid(int num){
        
        int n=num, rem;

        //loop over the whole digits of the given nunmber-> until reaching the 0
        while(n!=0){
            //get the remainder of the number, the current digit value
            rem=n%10;
            //check the conditions-> it have no leading zero | the number is divisible by the digit
            if(rem==0 || num%rem!=0)
                //if no-> false & break
                return false;
            //update the number by dividing it, integer division
            n/=10;
        }
        
        //if yes-> true
        return true;
    }
    
    vector<int> selfDividingNumbers(int left, int right) {
        
        //initialize an array for all valid numbers
        vector<int> res;
        
        //loop over the whole array elements
        for(int i=left;i<=right;i++)
            //call the valid function to check of the current number
            if(valid(i))
                //if valid-> add to the vector
                res.push_back(i);
            
        //return the all valid elements
        return res;
    }
};