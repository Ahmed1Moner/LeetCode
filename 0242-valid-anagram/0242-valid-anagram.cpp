class Solution {
public:
    bool isAnagram(string s, string t) {
        
        //sort the letters of the 1st string
        sort(s.begin(), s.end());
        //sort the letters of the 2nd string
        sort(t.begin(), t.end());
        
        //return true if they're the same exactly
        return s==t;
    }
};