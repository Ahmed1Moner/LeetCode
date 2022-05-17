class Solution {
public:
    string reverseWords(string s) {
        stack<string> str;
        string temp;
        for(int i=0;i<s.length();i++){
            if(s[i]==' '){
                if(temp.length()>0){
                    str.push(temp);    
                }
                temp = "";
            }
            else{
                temp+=s[i];
            }
        }
        
        if(temp.length()>0){
            str.push(temp);    
        }
        
        string result="";
        for(int j=0;!str.empty();j++){
            result+= str.top();
            str.pop();
            if(!str.empty()){
                result+=" ";
            }
        }
        
        return result;
    }
};