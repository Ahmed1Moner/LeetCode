class Solution {
public:
    bool wordPattern(string pattern, string s) {
        
        //split the given string into words, which is splitted by the space
        vector<string> words;
        
        stringstream str(s);
        string word;
        
        while(str>>word)
            words.push_back(word);

        //check first if the given string's words != pattern's letters
        if(words.size()!=pattern.size())
            return false;
        
        //initialize a map & set
        unordered_map<char, string> mp;
        set<string> st;
        
        //loop with the number of letters in either the words or the pattern
        for(int i=0;i<pattern.size();i++){
            
            //case 1: check first if the current word is added & != the last added one
            if(mp.find(pattern[i])!=mp.end()){
                //then, check if the current word != mp.second-> false
                if(mp[pattern[i]]!=words[i])
                    return false;
            }
            
            //case 2: not added yet
            else{
                //if it appears in the set more than one-> false
                if(st.count(words[i])>0)
                    return false;
                
                //add the word to the map
                mp[pattern[i]]=words[i];
                //add the word to the set
                st.insert(words[i]);
            }
        }
        
        //after all, if all coditions are passed-> true
        return true;
    }
};