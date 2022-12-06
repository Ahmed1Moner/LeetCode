class Solution {
public:
    char repeatedCharacter(string s) {
        
        map<char, int> mp;
        for(auto item:s){
            mp[item]++;
            if(mp[item]==2)
                return item;
        }
        return -1;
    }
};