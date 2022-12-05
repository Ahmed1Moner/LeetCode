class Solution {
public:
    int maxNumberOfBalloons(string text) {
        
        //initialize a map
        map<char, int> mp;
        
        //loop over the whole string letters
        for(auto item : text)
            //add 1 to its position in the map
            mp[item]++;
        
        //as the word "balloon" (b:1, a:1, l:2, o:2, n:1), while comparing these values with the actual map's ones-> get the minimum over the whole ones
        return min({mp['b'], mp['a'], mp['l']/2, mp['o']/2, mp['n']});
    }
};