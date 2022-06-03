class Solution {
public:
    bool backspaceCompare(string s, string t) {
        
        //initialize two stack from character type
        stack<char> s1, s2;
        
        //while the entered char isn't '#', add it to the stack
        //while the entered char is '#' & the stack contains at least one char, remove the top of the stack
        for(int i=0;i<s.length();i++){
            if(s[i]!='#'){
                s1.push(s[i]);
            }
            else if(s[i]=='#' && !s1.empty()){
                s1.pop();
            }
        }
        
        //the same algorithm as the above one
        for(int j=0;j<t.length();j++){
            if(t[j]!='#'){
                s2.push(t[j]);
            }
            else if(t[j]=='#' && !s2.empty()){
                s2.pop();
            }
        }
        
        //comparing the char of the two stack one by one, they must be from the same size
        int x=s1.size();
        int y=s2.size();
        
        if(x==y){
            for(int k=0;k<x;k++){
                if(s1.top()!=s2.top()){
                    return false;
                }
                else{
                    s1.pop();
                    s2.pop();
                }
            }
            return true;
        }
        else{
            return false;
        }
    }
};       