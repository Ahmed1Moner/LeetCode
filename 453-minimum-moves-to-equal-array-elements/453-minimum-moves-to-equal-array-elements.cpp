class Solution {
public:
    int minMoves(vector<int>& nums) {
        //initialize a counter to count the number of minimum moves
        int counter=0;
        //initialze a variable with the maximum integer value
        int m=INT_MAX;
        
        //loop over the elements to get the minimum one
        for(int j=0;j<nums.size();j++)
            //compare each element with the minimum value-> assign the min one
            if(nums[j]<m)
                m=nums[j];

        //loop over the array elements
        for(int num:nums)
            //subtract the current num from the minimum number & add it to the counter
            counter+=(num-m);

        //return the counter value
        return counter;
    }
};

/*
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
*/