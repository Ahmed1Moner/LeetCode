class Solution {
public:
    bool detectCapitalUse(string word) {
        
        bool check=false;
        
        if(isupper(word[0]) && isupper(word[1])){
            
            for(int i=2;i<word.size();i++)

                if(!isupper(word[i]))
                    return false;;
        }
        
        else {
            for(int i=1;i<word.size();i++)
                
                if(isupper(word[i]))
                    return false;
        }
        
        return true;
    }
};