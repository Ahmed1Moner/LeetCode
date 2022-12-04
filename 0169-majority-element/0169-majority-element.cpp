class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        //sort the whole array elements
        sort(nums.begin(), nums.end());
        
        //return the half array's element
        return nums[nums.size()/2];
    }
};