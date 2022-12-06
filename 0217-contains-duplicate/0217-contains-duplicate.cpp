class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        
        //initialize a map
        map<int, int> mp;
        
        //loop over the whole array elements
        for(auto item:nums){
            
            //add 1 in each number's location
            mp[item]++;
            //at the same time, check if any one have a value >= 2
            if(mp[item]>=2)
                //true & break
                return true;
        }
        
        //after all, if there's no one-> false
        return false;
    }
};