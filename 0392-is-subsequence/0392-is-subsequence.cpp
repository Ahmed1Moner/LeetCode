class Solution {
public:
    bool isSubsequence(string s, string t) {
        
        //initialize two pointers-> i&j
        int j=0;
        
        for(int i=0;i<t.size();i++){
            
            //if the two strings have the same letter in the same order
            if(t[i]==s[j])
                //move the second pointer
                j++;
            
        }
        
        //at the end, if the second pointer checks all the string's letters-> true
        return j==s.size();
    }
};