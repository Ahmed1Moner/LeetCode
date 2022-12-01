class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        
        //initialize a map and a vector
        vector<int> v;
        unordered_map<int, int> m;
        
        //loop over the whole array elements
        for(int item:nums)
            //add 1 to in the position of the current item value
            m[item]++;
        
        //loop again over the elements
        for(int i=1;i<=nums.size();i++)
            //check if the current element isn't counted
            if(m[i]==0)
                //add it to the vector
                v.push_back(i);
        
        //return the vector of the remainder values
        return v;
    }
};