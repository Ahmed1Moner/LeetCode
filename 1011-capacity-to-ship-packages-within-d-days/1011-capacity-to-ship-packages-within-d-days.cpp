class Solution {
public:
    
    //helper function to check if the middle pointer value of the range is a valid value to be divided or not
    bool valid(int mid, vector<int>& weights, int days){
        
        //initialize a counter to count the possible days & a partial sum varaible to sum each value and then compare it with the allowed days
        int counter=1, parSum=0;

        //loop over the whole array elements
        for(int weight:weights){
            //add the current weight in the array to the partial sum variable
            parSum+=weight;

            //check if the sum value is greater than the middle one
            if(parSum>mid){
                //add the day counter by one
                counter++;
                //return the sum value to the current/next weight value/position
                parSum=weight;
            }
        }
        
        //check if the counted days is valid or not compared to the allowed ones
        return counter<=days;
    }
    
    
    int shipWithinDays(vector<int>& weights, int days) {
        
        //initialize mainly two pointers-> one on the maximum value in the array & one on the sum of all array elements
        int left=*max_element(weights.begin(), weights.end());
        int sum=0;
        int right=accumulate(weights.begin(), weights.end(), sum);
        
        //ex: [1,2,3,4,5,6,7,8,9,10]-> left=10 & right=55
        
    //loop while the left pointer is before the right one
        while(left<right){
            
            //the third pointer mid-> is exactly the middle element between the main two ones
            int mid=left+(right-left)/2;
            
            //call the helper function
            if(valid(mid, weights, days))
                //case 1: if yes, valid-> move the right pointer to the mid position
                right=mid;
            else
                //case 2: if not-> move the left pointer to the position after the mid one

                left=mid+1;
        }
        
        //return the right position 
        return right;
        
    }
};

