class Solution {
public:
    int minMoves(vector<int>& nums) {
        //initialize a counter to count the number of minimum moves
        int counter=0;
        //sort the input array elements using the built-in function
        sort(nums.begin(), nums.end());

        //loop over the array elements from the end/largest number to the beggining/smallest
        for(int i=nums.size()-1;i>=0;i--)
            //subtract the current num from the first/minimum number & add it to the counter
            counter+=(nums[i]-nums[0]);

        //return the counter value
        return counter;
    }
};