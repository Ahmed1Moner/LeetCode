class Solution {
public:
    int averageValue(vector<int>& nums) {
        
        //initialize a counter a count the number of valid values
        int counter=0;
        double sum=0;
        
        //loop over the whole array elements
        for(int num:nums){
            
            //check if the number is even & divisable by 3
            if(num%3==0 && num%2==0){
                //if yes-> add the counter by one
                counter++;
                //update the sum value
                sum+=num;
            }
        }
        
        //return the total average value
        return (counter==0) ? sum : sum/counter;
    }
};