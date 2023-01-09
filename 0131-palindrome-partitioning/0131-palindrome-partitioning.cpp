class Solution {
public:
    
    //check if the given string is a valid palindrome or not
    bool isValid(string str, int left, int right){
        
        //loop until the two pointers meet
        while(left<right){
            
            //it the two pointers' letters aren't equal-> false
            if(str[left]!=str[right])
                return false;
            
            //update the two pointers
            left++;
            right--;
        }
        
        //else-> true
        return true;
    }
    
    void backtrack(string s, vector<vector<string>> &res, vector<string> &curr, int i){
        
        //base case: if the counter reaches the end of the vector
        if(i==s.size()){
            //add the temporary vector elements to the big one
            res.push_back(curr);
            return;
        }
        
        //loop over the whole given string's letters
        for(int j=i;j<s.size();j++){
            
            //check if it's a valid first
            if(isValid(s, i, j)){
                
                //do
                string temp=s.substr(i, j-i+1);
                curr.push_back(temp);
                //recrusion, backtrack
                backtrack(s, res, curr, j+1);
                //undo
                curr.pop_back();
            }
        }
        
        
    }
    
    vector<vector<string>> partition(string s) {
        
        //initialize a result vector of vector
        vector<vector<string>> res;
        //initialize a current vector
        vector<string> curr;
        
        //call the herlper function
        backtrack(s, res, curr, 0);
        
        //return the final result elements
        return res;
    }
};