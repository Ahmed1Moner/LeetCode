class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        //initialize map and vector of vectors
        vector<vector<string>> ans;
        unordered_map<string, vector<string>> m;
        
        //loop over the whole vector's strings
        for(int i=0;i<strs.size();i++){
            
            //sort each individual string & deal with it as the map's key
            string x = strs[i];
            sort(x.begin(), x.end());
            
            //for each unique key-> store the valid anagram strings together
            m[x].push_back(strs[i]);
            
        }
        
        //loop again over the map's elements
        for(auto item : m)
            //store the values of each key in the final vector
            ans.push_back(item.second);    
        
        //return the final vector of vectors's elements
        return ans;
    }
};