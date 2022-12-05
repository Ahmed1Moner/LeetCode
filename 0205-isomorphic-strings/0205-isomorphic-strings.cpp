class Solution {
public:
    bool isIsomorphic(string s, string t) {
        
        //handle if they've different sizes
        if(s.size()!=t.size())
            return false;
        
        //initialize two maps
        map<char,char> mp1, mp2;
        
        //loop over the two strings in the same time
        for(int i=0;i<s.size();i++){
            
            //
            if((mp1[s[i]] && mp1[s[i]]!=t[i]) || (mp2[t[i]] && mp2[t[i]]!=s[i]))
                return false;
            
            //save the current letter 
            mp1[s[i]]=t[i];
            mp2[t[i]]=s[i];
        }
        
        //after all, if we pass these tests successfully-> true
        return true;
    }
};