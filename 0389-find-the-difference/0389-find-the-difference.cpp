class Solution {
public:
    char findTheDifference(string s, string t) {
        
        //initialize a map
        unordered_map<char, int> mp;
        
        //loop over the whole string s's letters
        for(auto item:s)
            //add a value in its map
            mp[item]++;
        
        //loop again over the whole string t's letters
        for(auto item:t)
            
            //check if after decremeanting the value of the letter is a negative value-> the letter doesn't added before
            if(--mp[item]<0)
                //return it
                return item;
        
        //else-> return 0 as a string
        return '0';
    }
};