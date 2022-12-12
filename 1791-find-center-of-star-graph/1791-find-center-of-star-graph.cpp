class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        
        //initialize a map
        unordered_map<int, int>mp;
        
        //loop over the whole edges & add 1 to each vertix's value
        for(int i=0;i<edges.size();i++){
            mp[edges[i][0]]++;
            mp[edges[i][1]]++;
        }
        
        //loop again over the whole map
        for(auto item:mp)
            
            //return the vertix with the most connected edges-> v=e-1
            if(item.second==edges.size())
                return item.first;
        
        //after all, if there's no one-> return -1
        return -1;
    }
};