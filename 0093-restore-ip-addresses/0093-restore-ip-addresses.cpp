class Solution {
public:
    
    bool isValid(string str){
        
        //case 1
        if(str.size()>3 || str.size()==0)
            return false;
        
        //case 2
        if(str.size()>1 && str[0]=='0')
            return false;
        
        //case 3
        if(str.size() && stoi(str)>255)
            return false;
        
        //else
        return true;
    }
    
    void backtrack(vector<string> &res, string s, string temp, int dots, int i){
        
        //base case
        if(dots==3){
            
            //check if the current substring is valid
            if(isValid(s.substr(i)))
                res.push_back(temp+s.substr(i));
            
            return;
        }
        
        //loop over the whole given string
        for(int j=i;j<s.size();j++){
            
            //check if the current substring is a valid one
            if(isValid(s.substr(i, j-i+1))){
                
                //do
                temp.push_back(s[j]);
                temp.push_back('.');
                //recursion, backtrack
                backtrack(res, s, temp, dots+1, j+1);
                //undo  
                temp.pop_back();
            }
        }
        
        return;
    }
    
    
    vector<string> restoreIpAddresses(string s) {
        
        vector<string> res;
        
        //check first
        if(s.size()<4)
            return res;
        
        //recursively, call the helper function
        backtrack(res, s, "", 0, 0);
        
        //return the final-possible values
        return res;
    }
};