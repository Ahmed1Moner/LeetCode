class Solution {
public:
    char findTheDifference(string s, string t) {
        
        //sort the two strings
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        
        //loop over the two string at the same time
        for(int i=0;i<t.size();i++)
            //once you find a different letter
            if(s[i]!=t[i])
                //return it
                return t[i];
        
        //else-> return 0 as a string
        return '0';
    }
};