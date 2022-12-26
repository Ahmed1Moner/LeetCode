class Solution {
public:
    int countGoodTriplets(vector<int>& arr, int a, int b, int c) {
        
        //initialize a counter
        int counter=0;
        
        //loop over the whole array elements, nested & check the conditions
        for(int i=0;i<arr.size();i++){
            for(int j=i+1;j<arr.size();j++){
                if(abs(arr[i]-arr[j])<=a){
                for(int k=j+1;k<arr.size();k++){
                    if(abs(arr[j]-arr[k])<=b && abs(arr[i]-arr[k])<=c)
                        counter++;
                }
            }
        }
    }
     
        //return the final counter value
        return counter;
    }
};