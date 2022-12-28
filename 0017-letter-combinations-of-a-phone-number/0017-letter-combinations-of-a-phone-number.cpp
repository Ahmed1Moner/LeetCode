class Solution {
public:
    
    void backtrack(string digits, vector<string>& res, string& curr, unordered_map<char, string>& mp, int i){
        
        //base case: if the counter reaches the size of the given string
        if(i==digits.size()){
            //add the current string to the result vector
            res.push_back(curr);
            return;
        }
        
        //initialize a temporary string, get the letters in the map of the(current letter)-> "2(3)", def
        string temp=mp[digits[i]];
        
        //loop over the whole vector elements
        for(int j=0;j<temp.size();j++){
            
            //do, add a specific letter of the temp word to the current string
            curr.push_back(temp[j]);
            //recursion, backtrack
            backtrack(digits, res, curr, mp, i+1);
            //undo, remove the specific letter of the temp word
            curr.pop_back();
        }
        
    }
    
    vector<string> letterCombinations(string digits) {
        
        //base case, empty string-> empty vector
        if(digits.empty())
            return {};
        
        //initialize a result vector
        vector<string>res;
        //current string
        string curr="";
        //hash table of letters
        unordered_map<char, string> mp={
            {'2', "abc"},
            {'3', "def"},
            {'4', "ghi"},
            {'5', "jkl"},
            {'6', "mno"},
            {'7', "pqrs"},
            {'8', "tuv"},
            {'9', "wxyz"}};
        
        //call the helper function
        backtrack(digits, res, curr, mp, 0);
        
        //return the final result vector
        return res;
    }
};