class Solution {
public:
    
    int numOfStrings(vector<string>& patterns, string word) {
        
        int counter=0;
        
        //loop over the whole array strings
        for(auto p:patterns)
            
            //check if the current string is found in the given word-> +1
            if(word.find(p)!=-1)
                counter++;
        
        //return the final counter value
        return counter;
    }
};