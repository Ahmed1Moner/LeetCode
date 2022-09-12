class Solution {
public:
    int smallestRangeI(vector<int>& nums, int k) {
        
        // get the maximum and the minimum value in the array
        int maxValue= *max_element(nums.begin(), nums.end());
        int minValue= *min_element(nums.begin(), nums.end());
        
        /* ex: [0,10] + [-2,2]
        min1-> 0 & max1=10 ... min2=-2 & max2=2
        the simple way is to add the min1+max2 & min2+max1 -> & subtract them
        */
        int temp=(maxValue+-k) - (minValue+k);
        
        //in case if all values are the same-> subtraction operation will result in a negative value-> if exists-> return 0 instead
        return max(0, temp);
        
    }
};