class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        
        //loop over the whole array elements
        for(int i=0;i<arr.size()-1;i++){
            //initialize a counter with initial value of 1 each loop, as it's already counted the current number
            int counter=1;
            //loop again over the remainder array elements
            for(int j=i+1;j<arr.size();j++){
                //if the current matches with any equal value, add the counter by 1
                if(arr[i]==arr[j])
                    counter++;
            }
            //check if the coutner value is more than 25% of the array 
            if(counter>(arr.size()/4))
                //if yes-> return the number
                return arr[i];
        }
        //after that, if no-> Base case: if there's only one element-> return it
        return arr[0];
    }
};