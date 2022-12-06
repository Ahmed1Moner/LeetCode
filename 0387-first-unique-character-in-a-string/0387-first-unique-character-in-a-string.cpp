class Solution {
public:
    int firstUniqChar(string s) {
        
        //initialize a map
        map<char, int>mp;
            
        //loop over the whole string letters
        for(int i=0;i<s.size();i++)
            //add its value by 1
            mp[s[i]]++;
        
        //loop over the whole string letters again
        for(int i=0;i<s.size();i++)
            //check if it has a value of 1->, non repeated
            if(mp[s[i]]==1)
                //return its index & break
                return i;
        
        //after all, if there's no one-> -1
        return -1;
    }
};