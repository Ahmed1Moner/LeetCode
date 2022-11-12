class Solution {
public:
    int distinctAverages(vector<int>& nums) {
        
        //initialize a set of float elements
        set<float> avg;
        int size=nums.size();
        //initialize two pointers, one on the first & one on the last one
        int i=0, j=size-1;
        
        //sort the whole array elements
        sort(nums.begin(), nums.end());
        
        //loop over the whole vector
        while(size--)
            //insert in the set the aveage of the first & the last-> the smallest & the largest values
            avg.insert((nums[i++]+nums[j--])/2.0);
        
        //return the number of elements stored in the set, which are distinct
        return avg.size();
    }
};