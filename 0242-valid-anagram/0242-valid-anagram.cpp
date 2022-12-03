class Solution {
public:
    bool isAnagram(string s, string t) {
        
        //handle if there've not the same size
        if(s.size()!=t.size())
            return false;
        
        //initialize two maps
        unordered_map<char, int>m1, m2;
        
        //loop over the 1st string & incremeant its location in 1st map
        for(char c:s)
            m1[c]++;
        
        //loop over the 2nd string & incremeant its location in 2nd map
        for(char c:t)
            m2[c]++;
        
        //loop again to check the values of the same letter in the two maps
        for(int i=0;i<s.size();i++)
            if(m1[s[i]]!=m2[s[i]])
                //if they're different-> false
                return false;
        
        return true;
    }
};