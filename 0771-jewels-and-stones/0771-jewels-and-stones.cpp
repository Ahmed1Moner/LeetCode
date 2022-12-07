class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        
        map<char, int>mp;
        int counter=0;
        
        for(auto c:stones)
            mp[c]++;
        
        for(auto i=0;i<jewels.size();i++)
            counter+=mp[jewels[i]];
        
        return counter;
    }
};