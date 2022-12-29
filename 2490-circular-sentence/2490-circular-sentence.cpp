class Solution {
public:
    bool isCircularSentence(string sentence) {
        
        for(auto i=0;i<sentence.size();i++)
            
            if((sentence[0]!=sentence[sentence.size()-1]) || ((sentence[i]==' ')&&(sentence[i-1]!=sentence[i+1])))
                return false;

        
        return true;
    }
};