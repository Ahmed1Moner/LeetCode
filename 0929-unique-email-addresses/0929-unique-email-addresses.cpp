class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        
        set<string> st;
        
        for(string currEmail : emails){
            
            string uniEmail="";
            for(char letter : currEmail){
                
                if(letter=='.')
                    continue;
                if(letter=='@' || letter=='+')
                    break;
                
                uniEmail+=letter;
            }
            
            uniEmail+=currEmail.substr(currEmail.find('@'), currEmail.size()-1);
            st.insert(uniEmail);

        }
        
        return st.size();
    }
};