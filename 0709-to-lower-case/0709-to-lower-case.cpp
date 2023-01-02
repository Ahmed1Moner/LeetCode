class Solution {
public:
    string toLowerCase(string s) {
        
        //loop over the whole string's letters
        for(int i=0;i<s.size();i++)
            //check if there's an upper letter
            if(isupper(s[i]))
                //replace it by its lower one
                s[i]=tolower(s[i]);
        
        //return the final modified string
        return s;
    }
};