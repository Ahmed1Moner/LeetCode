class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        
        //since the array elements are strictly incresing, we'll llop over the whole array elements & count the number of the elements which are smaller than the given kth missing integer & add them to it
        
        for(int num:arr)
            if(num<=k)
                k++;
        return k;
        
    }
};