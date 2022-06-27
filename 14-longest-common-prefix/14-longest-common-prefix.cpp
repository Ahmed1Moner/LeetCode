class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        //initialize two variables, one for the length of the vector, 
        //one for the minimum length of a word with initial value of the length of the first word
        int len=strs.size();
        int minWordLen=strs[0].size();
        
        //loop over the whole words of the vector & compare their lengths to get the smallest word / shortest one
        for(int i=1;i<len;i++){
            if(strs[i].size()<minWordLen){
                minWordLen=strs[i].size();
            }
        }
        
        //initialize a variable for the result string
        string result;
        
        //loop over each letter of the vector words with length of the minimum word length, as mentioned before
        for(int i=0;i<minWordLen;i++){
            //let character variable with initial value of the first char of the first word
            char ch=strs[0][i];
            //loop over the whole words until with the number of the words in the vector
            for(int j=0;j<len;j++){
                //compare each char of each word, respectively & if one is different-> return until the common ones only
                if(strs[j][i]!=ch){
                    return result;
                }
            }
            //if the char is the same-> add it to the variable result
            result+=ch;
        }
        return result;
    }
};