class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        
        //initialize two new arrays
        vector<int> small, large;
        int counter=0;
        
        //loop over the whole array elements
        for(int num:nums){
            
            //case 1: the current value is smaller than the pivot
            if(num<pivot)
                //add it to the small numbers vector
                small.push_back(num);
            //case 2: the current value is greater than the pivot
            else if(num>pivot)
                //add it to the large numbers vector
                large.push_back(num);
            //case 3: the current value equals to the pivot
            else
                //add the counter by 1, to know how many pivots
                counter++;
        }
      
        //iterate with the number of the counter value
        while((counter--)!=0)
            //add the pivot value in the array
            small.push_back(pivot);
        
        //then, iterate the large array to move its elements to only one array, small
        for(int num:large)
            small.push_back(num);
        
        //return the rearranged array numbers
        return small;
    }
};