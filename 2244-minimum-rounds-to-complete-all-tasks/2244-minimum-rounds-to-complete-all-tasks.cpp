class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        
        unordered_map <int, int> mp;
        int counter=0;
        
        for(auto task:tasks)
            mp[task]++;
        
        for(auto &item : mp){
            
            if(item.second==1)
                return -1;
            if(item.second%3==0)
                counter+=(item.second/3);
            else
                counter+=(item.second/3+1);
        }
        
        return counter;
    }
};