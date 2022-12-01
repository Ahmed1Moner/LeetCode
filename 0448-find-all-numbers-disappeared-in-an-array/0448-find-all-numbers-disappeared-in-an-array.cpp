class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        
        //initialize a set and a vector
        vector<int> v;
        set<int> s;
        
        //loop over the whole array elements
        for(int item:nums)
            //add 1 to in the position of the current item value
            s.insert(item);
        
        //loop again over the elements
        for(int i=1;i<=nums.size();i++)
            //check if the current element isn't counted
            if(s.count(i)==0)
                //add it to the vector
                v.push_back(i);
        
        //return the vector of the remainder values
        return v;
    }
};