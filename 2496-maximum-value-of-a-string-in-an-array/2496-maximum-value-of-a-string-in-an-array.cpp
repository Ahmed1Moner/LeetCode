class Solution {
public:
    
    //helper function to check if the current string is full of digits only or not
    bool onlyDigits(string temp){
        
        //loop over each letter in the current string
        for(auto t:temp)
            
            //if a non-digit is found-> false
            if(!isdigit(t))
                return false;
        
        //else-> true
        return true;
    }
    
    int maximumValue(vector<string>& strs) {
        
        int maxVal=INT_MIN;
        
        //loop over the whole given vector's strings
        for(auto str:strs){
            
            //case 1: only digits-> its value
            if(onlyDigits(str))
                maxVal=max(maxVal, stoi(str));
            //case 2: have letters-> its length
            else
                maxVal=max(maxVal, (int)str.size());
        }
        
        //return the final maximum reached value
        return maxVal;
    }
};